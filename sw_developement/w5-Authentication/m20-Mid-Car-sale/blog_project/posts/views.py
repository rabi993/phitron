from django.shortcuts import render, redirect,get_object_or_404
from . import forms
from . import models
from django.contrib.auth.decorators import login_required
from .models import Post, Cart, CartItem


from django.utils.decorators import method_decorator
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.urls import reverse_lazy
# Create your views here.

@login_required
def add_post(request):
    if request.method =='POST':
        post_form = forms.PostForm(request.POST)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('homepage')
    else:
        post_form = forms.PostForm()

    return render(request, 'add_post.html', {'form': post_form})

# Add Post using Class based view
@method_decorator(login_required, name='dispatch')
class AddPostCreateView(CreateView):
    model = models.Post
    form_class= forms.PostForm
    template_name= 'add_post.html'
    # success_url= reverse_lazy('add_post')
    success_url= reverse_lazy('homepage')
    def form_valid(self, form): 
        form.instance.author = self.request.user
        return super().form_valid(form)



@login_required
def edit_post(request, id):
    post = models.Post.objects.get(pk=id)
    post_form = forms.PostForm(instance=post)
    # print(post.title)
    if request.method =='POST':
        post_form = forms.PostForm(request.POST, instance=post)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('homepage')
    # else:
    #     post_form = forms.PostForm()

    return render(request, 'add_post.html', {'form': post_form})

# Edit post using class based view
@method_decorator(login_required, name='dispatch')
class EditPostView(UpdateView):
    model = models.Post
    form_class = forms.PostForm
    template_name ='add_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')




@login_required
def delete_post(request, id):
    post = models.Post.objects.get(pk=id)
    post.delete()
    return redirect('homepage')

# delete post using class based view
@method_decorator(login_required, name='dispatch')
class DeletePostView(DeleteView):
    model = models.Post
    template_name ='delete.html'
    success_url = reverse_lazy('profile')
    pk_url_kwarg = 'id'

class DetailPostView(DetailView):
    model = models.Post
    template_name = 'post_details.html'


    def post(self, request, *args, **kwargs):
        comment_form= forms.CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)


    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object
        comments = post.comments.all()
        comment_form = forms.CommentForm()
        
        context['comments'] = comments
        context['comment_form'] = comment_form
        return context

def buy_now(request, post_id):
    post = get_object_or_404(Post, id=post_id)
    if post.Available > 0:
        post.decrease_available()
        # Get or create a cart for the user
        cart, created = Cart.objects.get_or_create(user=request.user)
        
        # Check if item is already in the cart
        cart_item, created = CartItem.objects.get_or_create(cart=cart, post=post)
        
        if not created:
            # If item already in cart, increment quantity
            cart_item.quantity += 1
            cart_item.save()
    return redirect('detail_post', pk=post.id)

def delete_cart_item(request, post_id):
    cart_item = get_object_or_404(CartItem, id=post_id, cart__user=request.user)
    cart_item.delete()
    return redirect('profile')
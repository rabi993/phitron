from django.shortcuts import render, redirect
from . import forms
from . import models
from django.contrib.auth.decorators import login_required


from django.utils.decorators import method_decorator
from django.views.generic import CreateView, UpdateView, DeleteView
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

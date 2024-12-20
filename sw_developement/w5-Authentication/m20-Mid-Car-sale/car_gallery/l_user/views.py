from django.shortcuts import render, redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, update_session_auth_hash, logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from cars.models import Car, Cart
from brands.models import Brand


from django.contrib.auth.views import LoginView, LogoutView
from django.urls import reverse_lazy

# Create your views here.

def register(request):
    if request.method =='POST':
        register_form = forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, 'Account created Successfully')
            return redirect('register')
    else:
        register_form = forms.RegistrationForm()

    return render(request, 'register.html', {'form': register_form, 'type': 'register'})

def user_login(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, request.POST)
        if form.is_valid():
            user_name = form.cleaned_data['username']
            user_pass = form.cleaned_data['password']
            user = authenticate(username= user_name, password= user_pass)
            if user is not None:
                messages.success(request, 'Account Logged in Successfully')
                login(request, user)
                return redirect('profile')
            else:
                messages.warning(request, 'Login info incorrect')
                return redirect('register')
    else:
        form = AuthenticationForm()
        return render(request, 'register.html', {'form': form, 'type': 'Login'})
    

# user login view of class based view
class UserLoginView(LoginView):
    template_name= 'register.html'
    # success_url = reverse_lazy('profile')
    def get_success_url(self):
        return  reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successful')
        return super().form_valid(form)
    def form_invalid(self, form):
        messages.success(self.request, 'Logged in information incorrect')
        return super().form_invalid(form)
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type']= 'login'
        return context




@login_required
def profile(request,brand_slug = None):
    data = Car.objects.filter(l_user= request.user)
    if brand_slug is not None:
        brand = Brand.objects.get(slug= brand_slug)
        data = Car.objects.filter(l_user= request.user, brand = brand) 
    brands = Brand.objects.all()
    cart = Cart.objects.filter(user=request.user).first()
    
    
    return render(request, 'profile.html', {'data': data, 'brand': brands, 'cart': cart})





from brands.models import Brand
def home(request,brand_slug = None):
    data = Car.objects.all()
    if brand_slug is not None:
        brand = Brand.objects.get(slug= brand_slug)
        data = Car.objects.filter(brand = brand) 
    brands = Brand.objects.all()
    return render(request, 'home.html', {'data' : data, 'brand': brands} )

@login_required
def edit_profile(request):
    if request.method =='POST':
        profile_form = forms.ChangeUserForm(request.POST, instance= request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request, 'Profile updated Successfully')
            return redirect('profile')
    else:
        profile_form = forms.ChangeUserForm(instance= request.user)

    return render(request, 'update_profile.html', {'form': profile_form})

def pass_change(request):
    if request.method =='POST':
        form = PasswordChangeForm(request.user, data=request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, 'Password updated Successfully')
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form = PasswordChangeForm(user=request.user)

    return render(request, 'pass_change.html', {'form': form})

def user_logout(request):
    logout(request)
    return redirect('user_login')


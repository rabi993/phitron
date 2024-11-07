from django.shortcuts import render, redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, update_session_auth_hash, logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Post
from categories.models import Category

# Create your views here.
# def add_author(request):
#     if request.method =='POST':
#         author_form = forms.AuthorForm(request.POST)
#         if author_form.is_valid():
#             author_form.save()
#             return redirect('add_author')
#     else:
#         author_form = forms.AuthorForm()

#     return render(request, 'add_author.html', {'form': author_form})

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
    
@login_required
def profile(request,category_slug = None):
    data = Post.objects.filter(author= request.user)
    if category_slug is not None:
        category = Category.objects.get(slug= category_slug)
        data = Post.objects.filter(category = category) 
    categories = Category.objects.all()
    return render(request, 'profile.html', {'data': data, 'category': categories})





from categories.models import Category
def home(request,category_slug = None):
    data = Post.objects.all()
    if category_slug is not None:
        category = Category.objects.get(slug= category_slug)
        data = Post.objects.filter(category = category) 
    categories = Category.objects.all()
    return render(request, 'home.html', {'data' : data, 'category': categories} )

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
from django.shortcuts import render, redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import authenticate, login,  logout
from django.contrib import messages


def register(request):
    if request.method =='POST':
        register_form = forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, 'Account created Successfully')
            return redirect('user_login')
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
                return redirect('homepage')
        else:
            messages.warning(request, 'Login info incorrect')
            return redirect('user_login')
    else:
        form = AuthenticationForm()
        return render(request, 'register.html', {'form': form, 'type': 'Login'})
    

def user_logout(request):
    logout(request)
    return redirect('user_login')


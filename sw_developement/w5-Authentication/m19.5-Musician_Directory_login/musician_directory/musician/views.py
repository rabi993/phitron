from django.shortcuts import render, redirect
from . import forms
from . import models
from django.contrib.auth.decorators import login_required
from django.contrib import messages
# Create your views here.

@login_required
def add_musician(request):
    if request.method =='POST':
        musician_form = forms.MusicianForm(request.POST)
        if musician_form.is_valid():
            musician_form.save()
            messages.success(request, 'Musician Added  Successfully')
            return redirect('homepage')
    else:
        musician_form = forms.MusicianForm()

    return render(request, 'add_musician.html', {'form': musician_form})
@login_required
def edit_musician(request, id):
    musician = models.Musician.objects.get(pk=id)
    musician_form = forms.MusicianForm(instance=musician)
    # print(musician.title)
    if request.method =='POST':
        musician_form = forms.MusicianForm(request.POST, instance=musician)
        if musician_form.is_valid():
            musician_form.save()
            messages.success(request, 'Musician edited  Successfully')
            return redirect('homepage')
    # else:
    #     musician_form = forms.MusicianForm()

    return render(request, 'add_musician.html', {'form': musician_form})

@login_required
def delete_musician(request, id):
    musician = models.musician.objects.get(pk=id)
    musician.delete()
    return redirect('homepage')

from django import forms 
from .models import Car, Comment

class CarForm(forms.ModelForm):
    class Meta:
        model = Car
        # fields = '__all__'
        exclude =['l_user']
        
    

class CommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        fields = ['name', 'email','body']
        

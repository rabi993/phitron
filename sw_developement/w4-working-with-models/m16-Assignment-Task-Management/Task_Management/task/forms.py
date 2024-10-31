
from django import forms 
from .models import Task

class TaskForm(forms.ModelForm):
    class Meta:
        model = Task
        fields = '__all__'
        widgets = {
            'Task_Assign_Date': forms.DateInput(attrs={'type': 'date'}),
        }
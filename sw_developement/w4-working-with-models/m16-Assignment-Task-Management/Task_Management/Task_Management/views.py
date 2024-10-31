
from django.shortcuts import render
from task.models import Task
from category.models import Category

def home(request):
    data = Task.objects.all()
    data1 = Category.objects.all()
    # print(data)
    return render(request, 'home.html', {'data' : data, 'data1' : data1 } )

from django.shortcuts import render

# Create your views here.

def home(request):
    d = {'author': 'Rahim', 'age': 30, 'list':[2,5,6,7,10]}
    return render(request,"home.html", d)
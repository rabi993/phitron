from django.shortcuts import render
from datetime import datetime, timedelta
# Create your views here.

def home(request):
    response = render(request, 'home.html')
    response.set_cookie('name', 'rahim')
    # response.set_cookie('name', 'korim', max_age=60*3)
    response.set_cookie('name', 'korim', expires=datetime.utcnow()+timedelta(days=7))
    return response

def get_cookie(request):
    name = request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request, 'get_cookie.html', {'name': name})

def delete_cookie(request):
    response = render(request, 'del.html')
    response.delete_cookie('name')
    return response
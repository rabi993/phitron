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


def set_session(request):
    data ={
        'name': 'Rahim',
        'age': 23,
         'language' : 'Bangla'

    }
    print(request.session.get_session_cookie_age())
    print(request.session.get_expiry_date())
    request.session.update(data)
    return render(request,'home.html')

def get_session(request):
    name = request.session.get('name')
    age = request.session.get('age')
    print(name)
    return render(request,'get_session.html', {'name': name,'age': age})

def delete_session(request):
    # del request.session['name']
    # request.session.clear()
    request.session.flush()
    request.session.clear_expired()
    return render(request, 'del_session.html')
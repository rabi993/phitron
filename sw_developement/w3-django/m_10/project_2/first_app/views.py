from django.shortcuts import render
import datetime
# Create your views here.

def home(request):
    d = {'author': 'Rahim', 'age': 5, 'list':[2,5,6,7,10], 'lst': ['python','django','c++'], 'birthday': datetime.datetime.now() , 'val':' ','courses' : [
        {
            'id': 1,
            'name' : 'python',
            'fee': 5000
        },
        {
            'id': 2,
            'name' : 'ccccc',
            'fee': 3000
        },
        {
            'id': 3,
            'name' : 'database',
            'fee': 2000
        }
    ]}
    return render(request,"home.html", d)
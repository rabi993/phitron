
from django.shortcuts import render
from album.models import Album
from musician.models import Musician

def home(request):
    data = Album.objects.all()
    data1 = Musician.objects.all()
    print(data)
    return render(request, 'home.html', {'data' : data, 'data1' : data1 } )

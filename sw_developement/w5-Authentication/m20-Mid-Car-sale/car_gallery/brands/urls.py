
from django.urls import path
from . import views

urlpatterns = [
    path('add/', views.add_brand, name='add_brand'),
   
]
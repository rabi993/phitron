from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='home'),
    path('meals/', views.meals, name='meals'),
    path('about/ttt/', views.about, name='about'),
]

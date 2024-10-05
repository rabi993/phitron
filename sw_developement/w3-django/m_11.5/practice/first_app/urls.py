from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.index, name='home'),
    path('home2/', views.home2, name='home2'),
    # path('about/page/<int:id>', views.about, name='about'),
    path('about/', views.about, name='about'),
]

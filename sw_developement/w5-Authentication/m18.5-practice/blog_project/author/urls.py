from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('register/', views.register, name='register'),
    path('login/', views.user_login, name='user_login'),
    path('logout/', views.user_logout, name='user_logout'),
    path('profile/', views.profile, name='profile'),
    path('profile/edit/', views.edit_profile, name='edit_profile'),
    path('profile/edit/pass_change/', views.pass_change, name='pass_change'),
    path('profile/edit/pass_change2/', views.pass_change2, name='pass_change2'),
    path('category/<slug:category_slug>/', views.profile, name='author_category_wise_post'),
   
]

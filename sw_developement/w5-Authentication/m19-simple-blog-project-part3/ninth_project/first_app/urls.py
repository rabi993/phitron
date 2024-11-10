
from django.urls import path
from . import views

urlpatterns = [
    
    # path('', views.home),
    path('', views.set_session),
    path('get/cookie/', views.get_cookie, name="cookie"),
    path('get/session/', views.get_session, name="session"),
    path('del/cookie/', views.delete_cookie, name="del"),
    path('del/session/', views.delete_session, name="del_session"),
]
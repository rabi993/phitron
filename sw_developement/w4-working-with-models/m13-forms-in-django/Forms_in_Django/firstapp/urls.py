from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='home'),
    path('meals/', views.meals, name='meals'),
    path('about/ttt/', views.about, name='about'),
    path('form/html_form/', views.submit_form, name='submit_form'),
    path('submit_show/', views.submit_show, name='submit_show'),
    # path('django_form/', views.django_form, name='django_form'),
    # path('django_form/studentForm/', views.studentForm, name='django_form'),
    path('django_form/passwordValidation/', views.passwordValidation, name='django_form'),
    path('practice_form/', views.practiceForm, name='practice_form'),
    path('model_form/', views.model_Form, name='model_form'),
]


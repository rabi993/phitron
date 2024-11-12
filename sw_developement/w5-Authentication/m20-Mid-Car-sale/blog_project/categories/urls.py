
from django.urls import path
from . import views

urlpatterns = [
    path('add/', views.add_category, name='add_category'),
    # path('add/sub/', views.add_subcategory, name='add_subcategory'),
   
]
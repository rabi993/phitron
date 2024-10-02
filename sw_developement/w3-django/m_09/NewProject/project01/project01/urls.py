
from django.contrib import admin
from django.urls import path
# from .views import contact
# from .views import home
from . import views


urlpatterns = [
    path('admin/', admin.site.urls),
    # path('home/', home),
    # path('contact/', contact),
    # path('home/', views.home),
    path('', views.home),
    path('contact/', views.contact)
]

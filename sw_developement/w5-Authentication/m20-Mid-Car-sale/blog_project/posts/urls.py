from django.contrib import admin
from django.urls import path, include
from . import views
urlpatterns = [
    # path('add/', views.add_post, name='add_post'),
    path('add/', views.AddPostCreateView.as_view(), name='add_post'),
    # path('edit/<int:id>', views.edit_post, name='edit_post'),
    path('edit/<int:id>', views.EditPostView.as_view(), name='edit_post'),
    # path('delete/<int:id>', views.delete_post, name='delete_post'),
    path('delete/<int:id>', views.DeletePostView.as_view(), name='delete_post'),
    path('posts/details/<int:pk>', views.DetailPostView.as_view(), name='detail_post'),
    path('posts/buy/<int:post_id>/', views.buy_now, name='buy_now'),
   
]
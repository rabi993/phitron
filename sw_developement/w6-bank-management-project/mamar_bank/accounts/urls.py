from django.urls import path, include
from .views import UserRegistrationView, UserLoginView, UserBankAccountUpdateView, user_logout,pass_change
# from django.contrib.auth.views import LogoutView
urlpatterns = [
    
    path('register/', UserRegistrationView.as_view(), name='register' ),
    path('login/', UserLoginView.as_view(), name='login'),
    # path('logout/', UserLogoutView.as_view(), name='logout'),
    path('logout/', user_logout, name='logout'),
    path('profile/', UserBankAccountUpdateView.as_view(), name='profile' ),
    path('profile/pass_change/', pass_change, name='pass_change'),

]
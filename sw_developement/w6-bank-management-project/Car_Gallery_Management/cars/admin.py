from django.contrib import admin

from . import models
# Register your models here.
admin.site.register(models.Car)
admin.site.register(models.Comment)
admin.site.register(models.CartItem)
admin.site.register(models.Cart)
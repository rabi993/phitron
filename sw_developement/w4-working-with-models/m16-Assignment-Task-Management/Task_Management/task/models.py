from django.db import models
from category.models import Category
from datetime import date
# Create your models here.
class Task(models.Model):
    title = models.CharField(max_length=50)
    taskDescription = models.TextField()
    category = models.ManyToManyField(Category)
    is_completed = models.BooleanField(default=False)
    Task_Assign_Date = models.DateField(default=date.today)  

    def __str__(self):
        return self.title 
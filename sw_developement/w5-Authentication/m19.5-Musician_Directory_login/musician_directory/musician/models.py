from django.db import models

# Create your models here.
class Musician(models.Model):
    First_Name = models.CharField(max_length=100)
    Last_Name = models.CharField(max_length=100)
    Email = models.EmailField()
    phone_no = models.CharField(max_length=12)
    Instrument_Type = models.TextField()


    def __str__(self):
        return self.First_Name
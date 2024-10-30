from django.db import models
from musician.models import Musician
from datetime import date
# Create your models here.
class Album(models.Model):

    Album_Name = models.CharField(max_length=50)
    musician = models.ForeignKey(Musician, on_delete=models.CASCADE)   
    release_date = models.DateField(default=date.today)
    RATING_CHOICES = [
        (1, '1 - Poor'),
        (2, '2 - Fair'),
        (3, '3 - Good'),
        (4, '4 - Very Good'),
        (5, '5 - Excellent'),
    ]
    rating  = models.IntegerField(choices=RATING_CHOICES, default=3)

    # musician = models.ForeignKey(Musician, on_delete=models.SET_NULL, null=True) 
    # musician_name = models.CharField(max_length=100, blank=True)  

    # def save(self, *args, **kwargs):
    #     if self.musician:  
    #         self.musician_name = f"{self.musician.First_Name} {self.musician.Last_Name}"
    #     super().save(*args, **kwargs)


    def __str__(self):
        return self.Album_Name 
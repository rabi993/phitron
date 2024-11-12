from django.db import models
from categories.models import Category
# from author.models import 
from django.contrib.auth.models import User
# Create your models here.


class Post(models.Model):
    title = models.CharField(max_length=50)
    content = models.TextField()
    # category = models.ManyToManyField(Category)
    category = models.ForeignKey(Category, on_delete=models.CASCADE,  null=True, blank=True)
    # subcategory = models.ForeignKey(SubCategory, on_delete=models.CASCADE, null=True, blank=True)
    author = models.ForeignKey(User, on_delete=models.CASCADE) 
    Price = models.FloatField( blank=True, null=True)  
    Available = models.IntegerField(default=0)  
    image = models.ImageField(upload_to='uploads/', blank=True, null=True)

    def __str__(self):
        return self.title 
    class Meta:
        # Ensures that each title is unique within a category
        unique_together = ('title', 'category')
    
    def decrease_available(self):
        if self.Available > 0:
            self.Available -= 1
            self.save()






class Comment(models.Model):
    post= models.ForeignKey(Post, on_delete=models.CASCADE, related_name='comments')
    name = models.CharField(max_length=30)
    email = models.EmailField()
    body = models. TextField()
    created_on = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"Comments by {self.name}"
    


class Cart(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    
    def __str__(self):
        return f"{self.user.username}'s Cart"

class CartItem(models.Model):
    cart = models.ForeignKey(Cart, on_delete=models.CASCADE, related_name="items")
    post = models.ForeignKey(Post, on_delete=models.CASCADE)
    quantity = models.PositiveIntegerField(default=1)

    def __str__(self):
        return f"{self.post.title} - {self.quantity}"
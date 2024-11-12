from django import forms 
from .models import Category

class CategoryForm(forms.ModelForm):
    class Meta:
        model = Category
        fields = '__all__'
# class subCategoryForm(forms.ModelForm):
#     class Meta:
#         model = subCategory
#         fields = '__all__'
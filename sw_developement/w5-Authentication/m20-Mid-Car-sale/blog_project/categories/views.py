
from django.shortcuts import render, redirect
from . import forms
# Create your views here.
def add_category(request):
    if request.method =='POST':
        category_form = forms.CategoryForm(request.POST)
        if category_form.is_valid():
            category_form.save()
            return redirect('add_category')
    else:
        category_form = forms.CategoryForm()

    return render(request, 'add_category.html', {'form': category_form})
# def add_subcategory(request):
#     if request.method =='POST':
#         subcategory_form = forms.subCategoryForm(request.POST)
#         if subcategory_form.is_valid():
#             subcategory_form.save()
#             return redirect('add_subcategory')
#     else:
#         subcategory_form = forms.subCategoryForm()

#     return render(request, 'add_subcategory.html', {'form': subcategory_form})

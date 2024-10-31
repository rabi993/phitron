from django import forms 
from django.core import validators
from .models import MyModel

# widgets == field to html input
class contactForm(forms.Form):
    name = forms.CharField(label="Full Name : " ,help_text='Total length must be within 70 characters', required=False, widget= forms.Textarea(attrs={"id" : 'text_area', "class": 'class1 class2' , 'placeholder': 'Enter Your Name'}))
    file = forms.FileField()
    email = forms.EmailField(label="User Email")
    # age = forms.IntegerField()
    # weight = forms.FloatField()
    # balance = forms.DecimalField()
    age = forms.CharField(widget=forms.NumberInput)
    check = forms.BooleanField()
    birthday = forms.CharField(widget=forms.DateInput(attrs={'type' : 'date'}))
    appointment = forms.CharField(widget=forms.DateInput(attrs={'type' : 'datetime-local'}))
    CHOICES =[('S','Small'),('M','Medium'),('L','Large')]
    size = forms.ChoiceField(choices= CHOICES , widget= forms.RadioSelect )
    MEAL =[('p','pepperoni'),('M','Mashroom'),('B','Beef')]
    pizza = forms.MultipleChoiceField(choices= MEAL, widget=forms.CheckboxSelectMultiple)



# class studentData(forms.Form):
#     name = forms.CharField(widget= forms.TextInput)
#     email = forms.CharField(widget= forms.EmailInput)
#     # def clean_name(self):
#     #     valname = self.cleaned_data['name']
#     #     if len(valname)<10:
#     #         raise forms.ValidationError("Enter a name with at least 10 characters")
#     #     return valname
#     # def clean_email(self):
#     #     valemail = self.cleaned_data['email']
#     #     if '.com' not in valemail:
#     #         raise forms.ValidationError("Your Email must contain with '.com'")
#     #     return valemail
    
#     def clean(self):
#         cleaned_data = super().clean()
#         valname = self.cleaned_data['name']
#         valemail = self.cleaned_data['email']

#         if len(valname)<10:
#             raise forms.ValidationError("Enter a name with at least 10 characters")
#         if '.com' not in valemail:
#             raise forms.ValidationError("Your Email must be contain with '.com'")


def len_check(value):
    if len(value) < 10:
        raise forms.ValidationError('Emter a value at least 10 characters')
        
class studentData(forms.Form):
    name = forms.CharField( validators=[validators.MinLengthValidator(10, message="Enter a name with at least 10 characters")])
    text = forms.CharField(widget=forms.TextInput,validators=[len_check])
    email = forms.CharField(widget= forms.EmailInput, validators=[validators.EmailValidator(message="Enter a valid email")])
    age = forms.IntegerField(validators=[validators.MaxValueValidator(34,message='age must be 34'), validators.MinValueValidator(24,message='age at least 24')])
    file = forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf','jpg','png'], message="file extention must be .pdf/.png/.jpg")])
    

class passwordValidationProject(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput)
    confirm_password = forms.CharField(widget=forms.PasswordInput)

    def clean(self):
        clean_data = super().clean()
        val_pass = self.cleaned_data['password']
        val_conpass = self.cleaned_data['confirm_password']
        val_name = self.cleaned_data['name']
        if val_conpass != val_pass:
            raise forms.ValidationError("password doesn't match")
        if len(val_name)<15:
            raise forms.ValidationError('Name must be at least 15 characters')



from django.forms.widgets import NumberInput
import datetime
# from .models import MyModel

class PracticeForm(forms.Form):
    name = forms.CharField()
    comment = forms.CharField(widget=forms.Textarea)
    comment2 = forms.CharField(widget=forms.Textarea(attrs={'rows':3}))
    email = forms.EmailField()
    agree = forms.BooleanField()
    date = forms.DateField()
    birth_date = forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
    BIRTH_YEAR_CHOICES = ['1980', '1981', '1982']
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTH_YEAR_CHOICES))
    value = forms.DecimalField()
    email_address = forms.EmailField(required = False,)
    message = forms.CharField(max_length = 10,)
    email_address = forms.EmailField( label="Please enter your email address",)
    first_name = forms.CharField(initial='Your name')
    agree = forms.BooleanField(initial=True)
    day = forms.DateField(initial=datetime.date.today)

    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
    ]
    favorite_color = forms.ChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_color1 = forms.ChoiceField(widget=forms.RadioSelect, choices=FAVORITE_COLORS_CHOICES)
    favorite_colors = forms.MultipleChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_colors1 = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,choices=FAVORITE_COLORS_CHOICES,)
    # model_choice = forms.ModelChoiceField(
    #     queryset = MyModel.objects.all(),
    #     initial = 0
    #     )
    # model_choices = forms.ModelMultipleChoiceField(
    #     widget = forms.CheckboxSelectMultiple,
    #     queryset = MyModel.objects.all(),
    #     initial = 0
    #     )



class MyForm(forms.ModelForm):
    class Meta:
        model = MyModel
        fields = '__all__'
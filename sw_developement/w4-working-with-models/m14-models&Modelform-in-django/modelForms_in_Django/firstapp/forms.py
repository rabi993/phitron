from django import forms 
from django.core import validators
from .models import studentModel

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


    
class modelForms(forms.Form):
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


    
class student_Form(forms.ModelForm):
    class Meta:
        model = studentModel
        # fields = ['roll','name','address']
        fields = '__all__'
        # exclude = ['roll']
        labels= {
            'name': 'Student Name',
            'roll': 'Student Roll'
        }
        widgets = {
            'name': forms.TextInput(attrs={'class': 'btn-primary'}),
            # 'roll': forms.PasswordInput()
        }
        help_texts ={
            'name': "Write your Full name"
        }
        error_messages ={
            'name': {'required': 'Your name is required'}
        }
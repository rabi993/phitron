# Generated by Django 5.1.1 on 2024-11-12 05:18

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('categories', '0003_subcategory'),
    ]

    operations = [
        migrations.DeleteModel(
            name='subCategory',
        ),
    ]

# Generated by Django 5.1.1 on 2024-11-09 08:02

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0008_post_image'),
    ]

    operations = [
        migrations.AlterField(
            model_name='post',
            name='image',
            field=models.ImageField(blank=True, null=True, upload_to='uploads/'),
        ),
    ]

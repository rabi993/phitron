# Generated by Django 5.1.1 on 2024-11-27 19:19

import django.utils.timezone
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('cars', '0002_cartitem_price'),
    ]

    operations = [
        migrations.AddField(
            model_name='cartitem',
            name='timestamp',
            field=models.DateTimeField(default=django.utils.timezone.now),
        ),
    ]
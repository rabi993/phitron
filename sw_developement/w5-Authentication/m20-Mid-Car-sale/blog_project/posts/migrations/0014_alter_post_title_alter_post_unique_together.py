# Generated by Django 5.1.1 on 2024-11-12 05:32

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('categories', '0004_delete_subcategory'),
        ('posts', '0013_alter_post_title'),
    ]

    operations = [
        migrations.AlterField(
            model_name='post',
            name='title',
            field=models.CharField(max_length=50),
        ),
        migrations.AlterUniqueTogether(
            name='post',
            unique_together={('title', 'category')},
        ),
    ]

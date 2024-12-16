from rest_framework import serializers
from . import models

class FlowerSerializer(serializers.ModelSerializer):
    user = serializers.StringRelatedField(many=False)
    category = serializers.StringRelatedField(many=True)
    color = serializers.StringRelatedField(many=True)
    class Meta:
        model = models.Flower
        fields = '__all__'

class ReviewSerializer(serializers.ModelSerializer):
    reviewer = serializers.CharField(source='reviewer.user.first_name',read_only=True)
    flower = serializers.CharField(source='flower.title', read_only=True)
    

    class Meta:
        model = models.Review
        fields = '__all__'
#         # fields = ['id', 'body', 'created', 'rating', 'reviewer', 'flower']
          
# class ReviewSerializer(serializers.ModelSerializer):
#     class Meta:
#         model = models.Review
#         fields = ['id', 'reviewer', 'flower', 'body', 'rating']

#     def create(self, validated_data):
#         reviewer_id = self.context['request'].data.get('reviewer_id')
#         flower_id = self.context['request'].data.get('flower_id')

#         reviewer = Buyer.objects.get(id=reviewer_id)
#         flower = Flower.objects.get(id=flower_id)

#         validated_data['reviewer'] = reviewer
#         validated_data['flower'] = flower

#         return super().create(validated_data)


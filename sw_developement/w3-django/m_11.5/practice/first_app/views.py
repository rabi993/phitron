# from django.shortcuts import render

# Create your views here.
# from django.shortcuts import render

# # Create your views here.

# def index(request):
#     data =[
#   {
#     "userId": 101,
#     "id": 1,
#     "title": "sunt aut facere repellat provident occaecati excepturi optio reprehenderit",
#     "body": "quia et suscipit\nsuscipit recusandae consequuntur expedita et cum\nreprehenderit molestiae ut ut quas totam\nnostrum rerum est autem sunt rem eveniet architecto"
#   },
#   {
#     "userId": 202,
#     "id": 2,
#     "title": "qui est esse",
#     "body": "est rerum tempore vitae\nsequi sint nihil reprehenderit dolor beatae ea dolores neque\nfugiat blanditiis voluptate porro vel nihil molestiae ut reiciendis\nqui aperiam non debitis possimus qui neque nisi nulla"
#   },
#   {
#     "userId": 303,
#     "id": 3,
#     "title": "ea molestias quasi exercitationem repellat qui ipsa sit aut",
#     "body": "et iusto sed quo iure\nvoluptatem occaecati omnis eligendi aut ad\nvoluptatem doloribus vel accusantium quis pariatur\nmolestiae porro eius odio et labore et velit aut"
#   },
#   {
#     "userId": 404,
#     "id": 4,
#     "title": "eum et est occaecati",
#     "body": "ullam et saepe reiciendis voluptatem adipisci\nsit amet autem assumenda provident rerum culpa\nquis hic commodi nesciunt rem tenetur doloremque ipsam iure\nquis sunt voluptatem rerum illo velit"
#   },
#   {
#     "userId": 505,
#     "id": 5,
#     "title": "nesciunt quas odio",
#     "body": "repudiandae veniam quaerat sunt sed\nalias aut fugiat sit autem sed est\nvoluptatem omnis possimus esse voluptatibus quis\nest aut tenetur dolor neque"
#   }]
    
#     meals = [
#         {
#             "strMeal": "BeaverTails",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/ryppsv1511815505.jpg",
#             "idMeal": "52928"
#         },
#         {
#             "strMeal": "Breakfast Potatoes",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/1550441882.jpg",
#             "idMeal": "52965"
#         },
#         {
#             "strMeal": "Canadian Butter Tarts",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/wpputp1511812960.jpg",
#             "idMeal": "52923"
#         },
#         {
#             "strMeal": "Montreal Smoked Meat",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/uttupv1511815050.jpg",
#             "idMeal": "52927"
#         },
#         {
#             "strMeal": "Nanaimo Bars",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/vwuprt1511813703.jpg",
#             "idMeal": "52924"
#         },
#         {
#             "strMeal": "Pate Chinois",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/yyrrxr1511816289.jpg",
#             "idMeal": "52930"
#         },
#         {
#             "strMeal": "Pouding chomeur",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/yqqqwu1511816912.jpg",
#             "idMeal": "52932"
#         },
#         {
#             "strMeal": "Poutine",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/uuyrrx1487327597.jpg",
#             "idMeal": "52804"
#         },
#         {
#             "strMeal": "Rappie Pie",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/ruwpww1511817242.jpg",
#             "idMeal": "52933"
#         },
#         {
#             "strMeal": "Split Pea Soup",
#             "strMealThumb": "https://www.themealdb.com/images/media/meals/xxtsvx1511814083.jpg",
#             "idMeal": "52925"
#         }
#     ]

#     # Combine both dictionaries
#     context = {
#     'data': data,
#     'meals': meals,
#     # 'id': {'roll': 123, 'name': 'Rahim'}
# }


#     # return render(request, 'index.html', {'data' : data}, {'meals' : meals} )

#  return render(request, 'index.html', "context" : context )
# # def about(request, id):
# #     return render(request, 'index.html', {'id': id})




# # http://127.0.0.1:8000/first_app/about/?page=1&rahim=19&name=rahim

# def about(request):
#     # print(request.GET)
#     # return render(request, 'index.html', {'id': id})
#     # context = {
#     #     'id': {'roll': request.GET.get('roll', 'N/A'), 'name': request.GET.get('name', 'N/A')}
#     # }
#     return render(request, 'index.html', {'id': request.GET})
#     # return render(request, 'about.html', context)


from django.shortcuts import render

# Create your views here.
def index(request):
    data = [
        {
            "userId": 101,
            "id": 1,
            "title": "sunt aut facere repellat provident occaecati excepturi optio reprehenderit",
            "body": "quia et suscipit\nsuscipit recusandae consequuntur expedita et cum\nreprehenderit molestiae ut ut quas totam\nnostrum rerum est autem sunt rem eveniet architecto"
        },
        {
            "userId": 202,
            "id": 2,
            "title": "qui est esse",
            "body": "est rerum tempore vitae\nsequi sint nihil reprehenderit dolor beatae ea dolores neque\nfugiat blanditiis voluptate porro vel nihil molestiae ut reiciendis\nqui aperiam non debitis possimus qui neque nisi nulla"
        },
        {
            "userId": 303,
            "id": 3,
            "title": "ea molestias quasi exercitationem repellat qui ipsa sit aut",
            "body": "et iusto sed quo iure\nvoluptatem occaecati omnis eligendi aut ad\nvoluptatem doloribus vel accusantium quis pariatur\nmolestiae porro eius odio et labore et velit aut"
        },
        {
            "userId": 404,
            "id": 4,
            "title": "eum et est occaecati",
            "body": "ullam et saepe reiciendis voluptatem adipisci\nsit amet autem assumenda provident rerum culpa\nquis hic commodi nesciunt rem tenetur doloremque ipsam iure\nquis sunt voluptatem rerum illo velit"
        },
        {
            "userId": 505,
            "id": 5,
            "title": "nesciunt quas odio",
            "body": "repudiandae veniam quaerat sunt sed\nalias aut fugiat sit autem sed est\nvoluptatem omnis possimus esse voluptatibus quis\nest aut tenetur dolor neque"
        }
    ]
    
    meals = [
        {
            "strMeal": "BeaverTails",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ryppsv1511815505.jpg",
            "idMeal": "52928"
        },
        {
            "strMeal": "Breakfast Potatoes",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/1550441882.jpg",
            "idMeal": "52965"
        },
        {
            "strMeal": "Canadian Butter Tarts",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/wpputp1511812960.jpg",
            "idMeal": "52923"
        },
        {
            "strMeal": "Montreal Smoked Meat",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uttupv1511815050.jpg",
            "idMeal": "52927"
        },
        {
            "strMeal": "Nanaimo Bars",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/vwuprt1511813703.jpg",
            "idMeal": "52924"
        },
        {
            "strMeal": "Pate Chinois",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yyrrxr1511816289.jpg",
            "idMeal": "52930"
        },
        {
            "strMeal": "Pouding chomeur",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yqqqwu1511816912.jpg",
            "idMeal": "52932"
        },
        {
            "strMeal": "Poutine",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uuyrrx1487327597.jpg",
            "idMeal": "52804"
        },
        {
            "strMeal": "Rappie Pie",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ruwpww1511817242.jpg",
            "idMeal": "52933"
        },
        {
            "strMeal": "Split Pea Soup",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/xxtsvx1511814083.jpg",
            "idMeal": "52925"
        }
    ]

    context = {
        'data': data,
        'meals': meals,
        'id': {'roll': 123, 'name': 'Rahim'}
    }

    return render(request, 'index.html', context)
def home2(request):
    meals = [
        {
            "strMeal": "BeaverTails",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ryppsv1511815505.jpg",
            "idMeal": "52928"
        },
        {
            "strMeal": "Breakfast Potatoes",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/1550441882.jpg",
            "idMeal": "52965"
        },
        {
            "strMeal": "Canadian Butter Tarts",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/wpputp1511812960.jpg",
            "idMeal": "52923"
        },
        {
            "strMeal": "Montreal Smoked Meat",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uttupv1511815050.jpg",
            "idMeal": "52927"
        },
        {
            "strMeal": "Nanaimo Bars",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/vwuprt1511813703.jpg",
            "idMeal": "52924"
        },
        {
            "strMeal": "Pate Chinois",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yyrrxr1511816289.jpg",
            "idMeal": "52930"
        },
        {
            "strMeal": "Pouding chomeur",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/yqqqwu1511816912.jpg",
            "idMeal": "52932"
        },
        {
            "strMeal": "Poutine",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/uuyrrx1487327597.jpg",
            "idMeal": "52804"
        },
        {
            "strMeal": "Rappie Pie",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/ruwpww1511817242.jpg",
            "idMeal": "52933"
        },
        {
            "strMeal": "Split Pea Soup",
            "strMealThumb": "https://www.themealdb.com/images/media/meals/xxtsvx1511814083.jpg",
            "idMeal": "52925"
        }
    ]
    
    return render(request, 'home2.html', { 'meals': meals})

def about(request):
    return render(request, 'index.html', {'id': request.GET})

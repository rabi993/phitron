from food_item import Food_item
from menu import Menu
from users import Customer, Admin, Employee
from restaurent import Restaurent
from orders import Order


def customer_menue():
    name = input("Enter your name: ")
    email = input("Enter your Email: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")

    customer = Customer(name=name, email=email, phone= phone, address= address)

    while True:
        print(f'welcome {customer.name}!!')
        print("1. View Menu")
        print("2. Add item to cart")
        print("3. View cart")
        print("4. Paybill")
        print("5. Exit")

        choice =
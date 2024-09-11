from food_item import Food_item
from menu import Menu
from users import Customer, Admin, Employee
from restaurent import Restaurent
from orders import Order

mamar_restaurent = Restaurent('Mamar restaurent')
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

        choice = int(input("Enter your Choice : "))
        if choice==1:
            customer.view_menu(mamar_restaurent)
        elif choice ==2:
            item_name = input("Enter item name : ")
            item_quantity = int(input("Enter item quantity : "))
            customer.add_to_cart(mamar_restaurent, item_name, item_quantity)
        elif choice ==3:
            customer.view_cart()
        elif choice ==4:
            customer.pay_bill()
        elif choice == 5:
            break
        else:
            print('Invalid Input')



def admin_menue():
    name = input("Enter your name: ")
    email = input("Enter your Email: ")
    phone = input("Enter your phone: ")
    address = input("Enter your address: ")

    admin = Admin(name=name, email=email, phone= phone, address= address)

    while True:
        print(f'welcome {admin.name}!!')
        print("1. Add new item")
        print("2. Add new Employee")
        print("3. View Employee")
        print("4. View item")
        print("5. Delete item")
        print("6. Exit")
        choice = int(input("Enter your Choice : "))
        if choice==1:
            item_name = input("Enter item name : ")
            item_price = int(input("Enter item price : "))
            item_quantity = int(input("Enter item Quantity : "))
            item = Food_item(item_name, item_price, item_quantity)
            admin.add_new_item(mamar_restaurent,item)

        elif choice ==2:
            name = input("Enter employee name : ")
            phone = input("Enter employee phone : ")
            email = input("Enter employee email : ")
            designation = input("Enter employee designation : ")
            age = input("Enter employee age : ")
            salary = input("Enter employee salary : ")
            address = input("Enter employee address : ")
            employee = Employee(name,  email, phone, address, age, designation, salary)
            admin.add_employee(mamar_restaurent, employee)

        elif choice ==3:
            admin.view_employee(mamar_restaurent)
        elif choice ==4:
            admin.view_menu(mamar_restaurent)
        elif choice == 5:
            item_name = input("Enter item name : ")
            admin.remove_item(mamar_restaurent, item_name)
        elif choice == 6:
            break
        else:
            print('Invalid Input')   

while True:
    print('Welcome !!')
    print("1. Customer ")
    print("2. Admin ")
    print("3. Exit ")
    
    choice = int(input("Enter Your choice : "))
    if choice == 1:
        customer_menue()
    elif choice ==2:
        admin_menue()
    elif choice ==3:
        break
    else:
        print("Invalid Input!!")

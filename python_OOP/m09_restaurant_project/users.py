# Customer
# Employee
# Admin

from abc import ABC

class User(ABC):
    def __init__(self, name,  email,phone, address) -> None:
        self.name =name
        self.phone = phone
        self.email = email
        self.address = address

class Employee(User):
    def __init__(self, name,  email, phone, address, age, designation, salary) -> None:
        self.age = age
        self.designation = designation
        self.salary = salary
        super().__init__(name, phone, email, address)


# emp = Employee('rahim', 'rahim@gmail.com', 652365,'dhaka', 32, 'chef', 12000  )
# print(emp.name)
        
class Admin(User):
    def __init__(self, name,  email, phone, address) -> None:
        super().__init__(name, phone, email, address)
        # self.employees = [] # ata hosse amader database

    def add_employee(self, restaurent, employee):
        restaurent.add_employee(employee)
    
    def view_employee(self, restaurent):
        restaurent.view_employee()
        
    def add_new_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)

    def remove_item(self, restaurent, item):
        restaurent.menu.remove_item(item)

class Restaurent:
    def __init__(self, name) -> None:
        self.name = name
        self.employees = [] # ata hosse amader database
        self.menu = Food_item()

    def add_employee(self, employee):
        # # employee class er akta object toiri hoye jabe
        # employee = Employee(name, email, phone, address, age, designation, salary)
        self.employees.append(employee)
        print(f'{name} is added !!')
        
    def view_employee(self):
        print("Employee List !!")
        for emp in self.employees:
            print (emp.name, emp.email, emp.phone, emp.address)


class Menu:
    def __init__(self) -> None:
        self.items =[] # items er database

    def add_menu_item(self,item):
        self.items.append(item)

    def find_item(self, item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    def remove_item(self, item_name):
        item = self.find_item(item_name)
        if item:
            self.items.remove(item)
            print('Item deleted ')
        else:
            print ('Item not found')

    def show_menu(self):
        print('*****Menu*****')
        print("name\tprice\tQuantity")
        for item in self.items:
            print(f'{item.name}\t{item.price}\t{item.quantity}')


class Food_item:
    def __init__(self, name, price, quantity) -> None:
        self.name =name
        self.price =price
        self.quantity = quantity

        


# ad = Admin('kahim', 'kahim@gmail.com', 652365,'dhaka'  )
# print(ad.name)

# ad = Admin('kahim', 'kahim@gmail.com', 652365,'dhaka'  )
# ad.add_employee('sagor', 'sagor@gmail.com',3213652, 'bogra', 32, 'chef',12000)
# ad.view_employee()


mn = Menu()
item = Food_item('pizza', 12.45, 10)
mn.add_menu_item(item)
mn.show_menu()

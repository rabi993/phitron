from menu import Menu

class Restaurent:
    def __init__(self, name) -> None:
        self.name = name
        self.employees = [] # ata hosse amader database
        self.menu = Menu()

    def add_employee(self, employee):
        # # employee class er akta object toiri hoye jabe
        # employee = Employee(name, email, phone, address, age, designation, salary)
        self.employees.append(employee)
        print(f'{name} is added !!')
        
    def view_employee(self):
        print("Employee List !!")
        for emp in self.employees:
            print (emp.name, emp.email, emp.phone, emp.address)

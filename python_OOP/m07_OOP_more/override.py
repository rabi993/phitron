class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name =name 
        self.age = age 
        self.height = height
        self.weight = weight

    def eat(self):
        print('vat mangso polao korma')

    def exercise(self):
        raise NotImplementedError


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)

    #override
    def eat(self):
        print('vegetable')
    
    def exercise(self):
        print('yes')

    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self, other):
        return self.weight * other.weight

    def __len__(self):
        return self.height
    def __gt__(self, other):
        return self.age > other.age
sakib = Cricketer('sakib', 38, 68, 91, 'BD')
musi = Cricketer('musi', 36, 60, 65, 'BD')
# sakib.eat()
# sakib.exercise()

print(12 + 23)
print('kamal' + 'jamal')
print([21,25,3] + [5, 2, 96, 78])

print(sakib + musi)
print(sakib * musi)
print(len(sakib))
print(sakib > musi)
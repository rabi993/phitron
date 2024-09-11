class Animal:
    def __init__(self, name) -> None:
        self.name = name

    def make_sound(self):
        print('animal making some sound')

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('meaw meaw')

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('ghew ghew')

class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('may may')



don = Cat('real don')
don.make_sound()

shepard = Dog('local shepard')
shepard.make_sound()

putu = Goat('putuuu')
putu.make_sound()

less = Goat('gora gori')
less.make_sound()

animals = [don, shepard,putu,less]
for animal in animals:
    animal.make_sound()

        
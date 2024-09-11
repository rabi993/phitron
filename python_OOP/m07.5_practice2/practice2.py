class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)
    
    # Overloading the greater than (>) operator to compare ages
    def __gt__(self, other):
        return self.age > other.age

# Creating instances
sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)

# Finding the oldest player
cricketers = [sakib, musfiq, kamal, jack, kalam]
oldest = max(cricketers, key=lambda cricketer: cricketer.age)

print(f"The oldest player is {oldest.name}, age {oldest.age}.")

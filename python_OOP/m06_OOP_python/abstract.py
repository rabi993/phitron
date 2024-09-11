from abc import ABC, abstractmethod


class Animal(ABC):
    @abstractmethod  #enforce all derived class to have a eat method
    def eat(self):
        print('i need food')

    @abstractmethod
    def move(self):
        pass


class monkey(Animal):
    def __init__(self , name) -> None:
        self.category = 'Monkey'
        self.name = name
        super().__init__()

    def eat(self):
        print('hey nana , i am eating banana')

    def move(self):
        print('hanging on the branches')

layka = monkey('lucky')
layka.eat()
layka.move()
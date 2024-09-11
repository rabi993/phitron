class Shape:
    def __init__(self, name) -> None:
        self.name = name


class Rectangle(Shape):
    def __init__(self, name, length, width) -> None:
        self.length = length
        self.width = width
        super().__init__(name)

    def area(self):
        return self.length * self.width 
class Triangle(Shape):
    def __init__(self, name, height, width) -> None:
        self.height = height
        self.width = width
        super().__init__(name)

    def area(self):
        return  .5 *self.height * self.width 
    
class Square(Shape):
    def __init__(self, name, length) -> None:
        self.length = length
        super().__init__(name)

    def area(self):
        return self.length * self.length 
    
class Circle(Shape):
    def __init__(self, name, radius) -> None:
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi * self.radius * self.radius
    

borgo = Square('borgo', 5)
print(borgo.area())


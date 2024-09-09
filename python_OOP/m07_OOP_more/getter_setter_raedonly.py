class user:
    def __init__(self,name, age, money) -> None:
        self._name = name
        self._age =age
        self.__money =money

    # getter without any setter is readonly attribute
    @property
    def age(self):
        return self._age
    
    # def salary(self):
    #     return self.__money
    

    # getter
    @property
    def salary(self):
        return self.__money
    

    # setter
    @salary.setter
    def salary(self, value):
        if value < 0:
            return 'salary can not be negative'
        self.__money += value




samsu = user('kopa', 21, 12000)

# print(samsu.__money)
# print(samsu.age())
print(samsu.age)
# print(samsu.salary())
print(samsu.salary)

samsu.salary = 25666
print(samsu.salary)     
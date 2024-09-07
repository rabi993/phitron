class Student:
    def __init__(self, name, curr_class, id):
        self.name = name
        self.curr_class = curr_class
        self.id = id

    def __repr__(self) -> str:
        return f'student with name: {self.name}, class: {self.curr_class}, id: {self.id}'


class Teacher:
    def __init__(self, name, subject, id):
        self.name =name
        self.subject =subject
        self.id = id

    def __repr__(self) -> str:
        return f'Teacher: {self.name}, subject: {self.subject}, id: {self.id}'

class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self, name, subject) -> str:
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            print( f'{name} has not enough fee')
        else:
            id = len(self.students) + 1
            student = Student(name, 'C', id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money {fee - 6500}'
    
    def __repr__(self) -> str:
        print('welcome to', self.name)
        print('--------OUR teachers---------')
        for teacher in self.teachers:
            print(teacher)
        print('--------OUR Students---------')
        for student in self.students:
            print(student)
        return 'All done for now'

# alia = Student('alia',9 ,1)
# ranbir =Teacher('ranbir', 'algo', 101)
# print(alia)
# print(ranbir)


phitron = School('Phitron')
phitron.enroll('lina', 7200)
phitron.enroll('alia', 5200)
phitron.enroll('rani', 8000)
phitron.enroll('boby', 6500)

phitron.add_teacher('tom', 'DS')
phitron.add_teacher('dalton', 'algo')
phitron.add_teacher('tomas', 'C++')

print(phitron)
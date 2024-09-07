class exam:
    def __init__(self, marks):
        self.marks = marks
        


    def get_marks(self):
        return self.marks
    
    def written_marks_gain(self, mark):
        if mark >= 0:
            self.marks += mark

    def fine_marks(self, mark):
        
            self.marks -= mark
            # print( f'Here is your mark {self.marks}')
            # print(f'Your marks after fine_marks: {self.marks}')
            print(f'Your marks after fine_marks: {self.get_marks()}')
            return self.marks

        
physics = exam(10)
physics.written_marks_gain(60)
physics.fine_marks(25)

print(physics.get_marks())


math = exam(10)
math.written_marks_gain(50)

print(math.get_marks())
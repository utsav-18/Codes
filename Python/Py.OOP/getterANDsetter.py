class Student:
    def __init__(self, marks):
        self._marks = marks   # private variable

    # Getter
    @property
    def marks(self):
        return self._marks

    # Setter
    @marks.setter
    def marks(self, value):
        if value < 0 or value > 100:
            print("Invalid marks!")
        else:
            self._marks = value

s1 = Student(85)

print(s1.marks)   # Getter → 85

s1.marks = 95     # Setter → updates value
print(s1.marks)

s1.marks = 150    # Setter → Invalid marks!
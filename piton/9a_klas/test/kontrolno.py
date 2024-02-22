class Student:
    def __init__(self, row, name, midname, familyname, grade1, grade2):
        self.__row = row
        self.__name = f"{name} {midname} {familyname}"
        self.__averageGrade = (grade1 + grade2) / 2

    def shestici(self):
        if self.__averageGrade in [6, 5.75, 5.5]:
            print(self.__name)

    def chetvorki(self, brChetvorki=0):
        if self.__averageGrade in [3.50, 3.75, 4, 4.25]:
            brChetvorki += 1
            
        return brChetvorki


students_list = []

file = open("9a_class.txt", "r")
chetvorki = 0
lines = file.readlines()
for line in lines:
    row, name, middlename, familyname, grade1, grade2 = line.strip().split()
    student = Student(row, name, middlename, familyname, float(grade1), float(grade2))
    students_list.append(student)

for student in students_list:
    student.shestici()
    chetvorki = student.chetvorki(chetvorki)

print(chetvorki)

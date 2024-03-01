from turtle import *

turtle = Turtle()
turtle.ht()

class Shape:
    def __init__(self):
        pass

    def neshto(self):
        pass


class Rectangle(Shape):
    def __init__(self, a, b):
        self.__a = a
        self.__b = b
        self.__area = 2 * self.__a + 2 * self.__b

    def Draw(self):
        penup()
        goto(-300, 0)
        pendown()
        color("blue")
        fillcolor("blue")
        begin_fill()
        forward(self.__a)
        left(90)
        forward(self.__b)
        left(90)
        forward(self.__a)
        left(90)
        forward(self.__b)
        end_fill()
        color("black")
        penup()
        goto((self.__a / 2) - 300, self.__b / 2)
        write(f"Area: {self.__area}", move=False, align='left', font=('Arial', 8, 'normal'))


A = 200
B = 300
Rekt = Rectangle(A, B)
Rekt.Draw()
turtle.screen.mainloop()

from turtle import *
import math

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


class Circle(Shape):
    def __init__(self, r, x, y):
        self.__rad = r
        self.__x = x
        self.__y = y
        self.__c = 2 * math.pi * self.__rad

    def Draw(self):
        penup()
        goto(self.__x, self.__y)
        pendown()
        color("red")
        circle(self.__rad)
        penup()
        goto(self.__x + self.__rad, self.__y)
        write(f"Circumference: {self.__c}", move=False, align='left', font=('Arial', 8, 'normal'))


class Triangle(Shape):
    def __init__(self, a, b):
        self.__a = a
        self.__b = b
        self.__c = math.sqrt(self.__a * self.__a + self.__b * self.__b)
        self.__area = (a * b) / 2
        self.__perimeter = self.__a + self.__b + self.__c

    def Draw(self):
        penup()
        goto(-200, -200)
        pendown()
        if self.__area > self.__perimeter:
            color("blue")
            fillcolor("blue")
        elif self.__area == self.__perimeter:
            color("black")
            fillcolor("black")
        else:
            color("green")
            fillcolor("green")
        begin_fill()
        forward(self.__a)
        left(90)
        forward(self.__b)
        left(147)
        forward(self.__c)
        end_fill()


class Comparator(Shape):
    def __init__(self, a, b):
        self.__a = a
        self.__b = b

    def Draw(self):
        penup()
        goto(350, 300)
        pendown()
        color("pink")
        fillcolor("pink")
        begin_fill()
        forward(self.__a)
        left(45)
        forward(self.__b)
        left(135)
        forward(self.__a)
        left(45)
        forward(self.__b)
        end_fill()


A = 200
B = 300
radius = 50
Rekt = Rectangle(A, B)
Rekt.Draw()
circle1 = Circle(radius, 200, 0)
circle1.Draw()
circle2 = Circle(radius, 200, 100)
circle2.Draw()
circle3 = Circle(radius, 200, -100)
circle3.Draw()
trg = Triangle(A, B)
trg.Draw()
com = Comparator(A, B)
com.Draw()
turtle.screen.mainloop()

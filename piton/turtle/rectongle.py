from turtle import *

turtle = Turtle()


class Shape:
    def __init__(self):
        pass

    class Rectangle:
        def __init__(self, a, b):
            self.__a = a
            self.__b = b
            self.__area = 2 * self.__a + 2 * self.__b

        def Draw(self):


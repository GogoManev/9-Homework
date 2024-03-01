import math
import turtle

import rectongle


class Circle(rectongle.Shape):
    def __init__(self, rad):
        self.__r = rad
        self.__c = 2*math.pi*self.__r

    def Draw(self):
        turtle.circle(self.__r, 2, 2)


radius = 40.5
Curclar = Circle(radius)
Curclar.Draw()
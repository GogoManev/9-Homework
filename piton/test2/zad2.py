import math


class Rectangle:
    def __init__(self, a, b):
        self.__a = a
        self.__b = b

    def Perimeter(self):
        return 2 * self.__a + 2 * self.__b

    def Area(self):
        return self.__a * self.__b

    def Diagonal(self):
        return math.sqrt(self.__a * self.__a + self.__b * self.__b)

    def isEqual(self, other):
        if self.__a == other.__a and self.__b == other.__b:
            return "They are the same"
        else:
            return "They are not the same"

    def SquaredPerimeter(self):
        return (2 * self.__a + 2 * self.__b) * (2 * self.__a + 2 * self.__b)


ra = 3
rb = 4
rect = Rectangle(ra, rb)
area = rect.Area()
perimeter = rect.Perimeter()
diagonal = rect.Diagonal()
print("The area of the rectangle is", area, ", The perimeter of the rectangle is", perimeter, ", the diagonal of the "
                                                                                              "rectangle is", diagonal)

a2 = 3
b2 = 4
rect2 = Rectangle(a2, b2)
area2 = rect2.Area()
perimeter2 = rect2.Perimeter()
diagonal2 = rect2.Diagonal()
print("The area of the rectangle is", area2, ", The perimeter of the rectangle is", perimeter2, ", the diagonal of the "
                                                                                                "rectangle is",
      diagonal2)

print(rect.isEqual(rect2))
squared = rect2.SquaredPerimeter()
print("Squared Perimeter:", squared)

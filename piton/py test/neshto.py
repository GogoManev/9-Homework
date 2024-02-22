import math

a = float(input("chislo: \n"))
b = float(input("chislo: \n"))
c = float(input("chislo: \n"))


def plus():
    print("Tova pravi", a+b+c)

def ooo():
    
    x = max(a, b, c)
    print(x, "e maksimuma")
    y = min(a, b, c)
    print(y, "e minimuma")
    z = math.sqrt(x)
    print("Koren Kvadr. na maks e:", z)

ooo()
plus()
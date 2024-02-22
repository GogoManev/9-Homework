def to_number(digits):
    print("Lista e", digits)
    n = 0
    for digit in digits:
        n = n*10 + digit
    print("Chisloto e", n)

to_number([1,4,7,2])
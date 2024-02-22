tuple1 = (('a', 23), ('b', 37), ('c', 11), ('d', 29))


def middle(n):
    return n[1]


print(sorted(tuple1, key=middle))

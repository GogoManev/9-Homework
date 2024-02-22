def fib_number(n):
    n1 = 0
    n2 = 1
    sledv = n2 
    count = 1

    while count <= n:
        print(sledv, end=" ")
        count += 1
        n1, n2 = n2, sledv
        sledv = n1 + n2

fib_number(6)

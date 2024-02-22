def is_number_balanced(n):
    arr = []
    while n != 0:
        arr.insert(0, n%10)
        n = n // 10
    size = len(arr)
    yes = True
    for i in range(size//2):
        j = size - i
        if arr[i] != arr[j-1]:
            yes = False
            print("False")
            break
    if yes:
        print("True")

is_number_balanced(4518)
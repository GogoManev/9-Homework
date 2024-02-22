arr = [8, 7, 2, 5, 3, 1]
Sum = 10
for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        if arr[j] == Sum - arr[i]:
            print("Pair found at index", i, "and", j)

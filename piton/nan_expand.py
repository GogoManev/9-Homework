def nan_expand(n):
    if n == 0:
        return "NaN"
    else:
        return "Not a " + nan_expand(n - 1)


times = 4
print(nan_expand(times))

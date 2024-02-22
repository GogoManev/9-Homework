def symmetricPairs(arr):
    result = []
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] == arr[j][::-1]:
                result.append(arr[i])
                result.append(arr[j])
                break
    return result


array = [[3, 4], [1, 2], [5, 2], [7, 10], [4, 3], [2, 5]]
symmetricalArrays = symmetricPairs(array)
print(symmetricalArrays)

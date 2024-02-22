def count_words(arr):
    words = dict()
    for i in range(len(arr)):
        if arr[i] in words:
            words.update({arr[i]: words[arr[i]] + 1})
        else:
            words[arr[i]] = 1

    return words
    

words = ['deez', 'deez', 'maina', 'maina', 'ieijn', 'maina']
print(count_words(words))



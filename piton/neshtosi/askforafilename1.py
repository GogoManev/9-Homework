def count_words(arr):
    words = dict()
    if arr in words:
        words.update({arr: words[arr] + 1})
    else:
        words[arr] = 1

    return words


name = input("Ime na faila: ")
file1 = open('text.txt', 'r')
file2 = open(name, 'w')
dumi = file1.read()
# file2.write(str(count_words(dumi)))
print(count_words(dumi))
file1.close()
file2.close()

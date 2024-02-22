def reverse():
    file1 = open('text.txt', 'r')
    file2 = open('obraten_red.txt', 'w')
    for line in reversed(list(file1)):
        file2.write(line.rstrip() + '\n')
    file1.close()
    file2.close()


reverse()

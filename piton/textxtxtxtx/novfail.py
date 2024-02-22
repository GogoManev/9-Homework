def newfile(name, n):
    file1 = open('text.txt', 'r')
    file2 = open(name, 'w')
    lines = file1.readlines()
    file2.write(lines[n])
    file1.close()
    file2.close()

ime = 'lines.txt'
red = 1
newfile(ime, red)

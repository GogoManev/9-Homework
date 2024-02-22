def files(string, fileName):
    file1 = open('text.txt', 'r')
    file2 = open(fileName, 'w')
    lines = file1.readlines()
    for i in list(file1):
        if string in file1:
            file2.write(lines[i])


name = 'result.txt'
character = 's'
files(character, name)

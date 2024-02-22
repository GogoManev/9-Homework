with open("text.txt") as file1:
    with open("drugtext.txt", "w") as file2:
        for line in file1:
            file2.write(line)
        file1.close()
        file2.close()

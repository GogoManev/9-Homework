import os
rename = 1

file1 = open('edno.txt', 'w')
file1.close()
if rename:
    os.rename('./edno.txt', 'dve.txt')

def newfileornot(name, texts):
    file1 = open(name, 'w')
    for values in texts:
        file1.write(values + '\n')
    file1.close()


redove = ['edno', 'tri', 'shestotin']
ime = 'result.txt'
newfileornot(ime, redove)

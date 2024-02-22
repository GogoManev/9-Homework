import time

file = open("9a_class.txt", "r")
lines = file.readlines()
shestici = []
chetvorki = 0
total = 0
broi = 0
for line in lines:
    row, name, middlename, familyname, number = line.strip().split()

    if number in ['6', '5.75', '5.5']:
        shestici.append(name + ' ' + middlename + ' ' + familyname)

    if number == '3.5' or number == '3.75' or number == '4' or number == '4.25':
        chetvorki += 1

    for j in lines:
        total += float(number)
        broi += 1

# printirane v konzolata
print("Uchenitsite s shestica sa:", shestici)
print("Broqt uchenici s chetvorka sa", chetvorki)
average = total / broi
print("Sredno aritmetichnata ocenka:", average)

if average < 4.50:
    print("Kontrolnoto beshe trudno")
else:
    print("Kontrolnoto beshe lesno")

# printirane v drug fail
file2 = open("results.txt", 'w')
file2.write("Uchenitsite s shestica sa: " + str(shestici) + '\n')
file2.write("Broqt uchenici s chetvorka sa " + str(chetvorki) + '\n')
average = total / broi
file2.write("Sredno aritmetichnata ocenka e: " + str(average) + '\n')
if average < 4.50:
    file2.write("Kontrolnoto beshe trudno" + '\n')
else:
    file2.write("Kontrolnoto beshe lesno" + '\n')
file2.write(time.strftime("Data: %d.%m.%Y, Chas: %H:%M:%S"))

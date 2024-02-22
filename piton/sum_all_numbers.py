def sum_of_numbers(st):
    num_str = ""
    broi = 0

    for char in st:
        if char.isdigit():
            num_str += char
        elif num_str:
            broi += int(num_str)
            num_str = ""

    if num_str:
        broi += int(num_str)
    return broi


string = "hewf12oui3"
print(sum_of_numbers(string))
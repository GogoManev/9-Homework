sampleDict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New York"
}

keys = ["name", "salary"]
for i in range(len(keys)):
    tva = sampleDict.get(keys[i])
    print(keys[i], tva)

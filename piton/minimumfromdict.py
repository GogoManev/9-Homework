sampleDict = {
    'Physics': 82,
    'Math': 65,
    'History': 75
}

worstSubject = min(sampleDict, key=sampleDict.get)
print(worstSubject)

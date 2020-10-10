word = input()
count = 0
for i in word:
    if (i.isupper()):
        count += 1
if (count > len(word) - count):
    print(word.upper())
else:
    print(word.lower())

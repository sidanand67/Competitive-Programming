word=input("enter the word: ")
lower=0
upper=0
for letter in word:
    if(letter.islower()):
        lower+=1
    elif(letter.isupper()):
        upper+=1
if(upper>lower):
    print(word.upper())
else:
    print(word.lower())

username = input()
name = ""

# parse each letter in the input and add each unique character to a placeholder string
for i in username:
    if (i not in name):
        name += i

# check number of unique characters and compare with given condition
if (len(name) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

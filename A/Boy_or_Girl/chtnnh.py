username = input()
name = ""
for i in username:
    if (i not in name):
        name += i
if (len(name) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

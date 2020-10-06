#input the username
username = str(input())
#initialize a list of 26 length to track characters
char_tracker= [0]*26

#traverse the username and update the char location to 1
for char in username:
    char_tracker[ord(char)-ord('a')]=1

#sum all element in the array to get total distinct chars
distinctCharCount=sum(char_tracker)

#determine if username is of boy or girl
if distinctCharCount%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

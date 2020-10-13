n = int(input())    # number of stones on the table 
str = input()       # string of colors in a row where RRB represents Red Red and Blue
 
cnt = 0
for i in range(1, n):
  if (str[i] == str[i-1]):    # checking if the ith color is same to its previous if yes then we need to remove one of them 
    cnt += 1
    
print(cnt)

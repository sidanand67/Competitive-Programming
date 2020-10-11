n = int(input())
str = input()
 
cnt = 0
for i in range(1, n):
  if (str[i] == str[i-1]):
    cnt += 1
    
print(cnt)
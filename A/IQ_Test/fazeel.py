n = int(input())
 
even, odd = 0, 0
index1, index2 = 0, 0
 
numbers = [int(x) for x in input().split()]
 
for i in range(n):
  if ((numbers[i] % 2) == 0):
    even += 1
    index1 = i
  else:
    odd += 1
    index2 = i
    
if(even == 1):
  print(index1+1)
else:
  print(index2+1)

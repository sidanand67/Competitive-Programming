n = input() #Taking input as string
l = len(n)
count=0
while(l>1): #Calculating the sum of digits while length of input is greater than 1
  sum=0
  for i in range(0,l):
    sum = sum + int(n[i])
  n = str(sum) #Taking the sum as new string
  l = len(n)
  count+=1
print(count)

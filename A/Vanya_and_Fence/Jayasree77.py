n, h = map(int,input().split())
a = list(map(int,input().split()))
width = 0
#If person's height is greater than fence width increases by 2 or else width increases by 1
for i in range(0,len(a)):
  if(a[i]>h):
    width+=2
  else:
    width+=1
print(width)

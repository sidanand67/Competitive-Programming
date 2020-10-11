values = list(int(x) for x in input().split())

k = values[0]
n = values[1]
w = values[2]

price = ((k*w*(w+1))//2)

if(price <= n):
  print(0)
else:
	print(price-n) 

values = list(int(x) for x in input().split())   

k = values[0]    # cost of first banana
n = values[1]    # initial number of dollars the soldier has 
w = values[2]    # number of bananas he want

price = ((k*w*(w+1))//2)     # calculating the dollars needed to purchase w number of bananas

if(price <= n):   # If price required to purchase w bananas is < number of dollars he possess 
  print(0)
else:
  print(price-n)  # else return the difference

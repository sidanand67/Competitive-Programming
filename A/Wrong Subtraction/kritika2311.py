[n, k] = list(map(int,input().strip().split()))
for i in range(k):
    if (n%10 > 0):
        n = n -1
    else:
        n = int(n/10)   
print(n)

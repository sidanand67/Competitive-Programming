[num, k] = list(map(int,input().strip().split()))
#taking the input of number and how many times is the operation is to execute

for i in range(k):
#using for loop till k times
#condition checking   
    if (num%10 > 0):
        num = num -1
    else:
        num = int(num/10)   
print(num)

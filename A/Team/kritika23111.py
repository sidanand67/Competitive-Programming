n = int(input())
#taking input for no of questions
question =0
for i in range(n):
    #taking input three times and evaluating the list at that time only
    lst = list(map(int,input().strip().split()))[:3]
    count = 0
    for j in lst:
        if(j==1):
            count = count +1
    if(count>=2):
        question = question + 1
print(question)

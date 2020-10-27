
def majorityElement(arr):
  
    n = len(arr)
    maxCount = 0
    index = -1  
    for i in range(n): 
        count = 0
        for j in range(n): 
            if(arr[i] == arr[j]):
                count += 1
 
        if(count > maxCount):
            maxCount = count
            index = i
  
    # if maxCount is > n/2 which satisfies majority element property
    # then return that element else return -1    
    if (maxCount > n//2):
        return arr[index]
    else:
        return -1 
  
arr = [2,2,1,1,1,2,2]
print(majorityElement(arr))

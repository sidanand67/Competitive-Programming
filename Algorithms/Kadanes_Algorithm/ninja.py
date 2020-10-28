# Initializing maxSoFar with largest possible negative number
def kadane (nums):
  currSum, maxSoFar = 0, -999999
  
  for i in nums:
    currSum += i
    if (currSum < 0):
      currSum = 0
    maxSoFar = max(maxSoFar, currSum)

  return maxSoFar

arr = [-2,1,-3,4,-1,2,1,-5,4]
print(kadane(arr))

"""
 
  Problem- Beautiful Matrix
  Platform- Codeforces
  Problem Link- http://codeforces.com/contest/263/problem/A
  Language- Python
 
 """
flag=0
for i in range(0,5):
    array=list(map(int,input().split()))
    #This nested loop is for taking input array which contains one row at a time.
    for j in range(0,5):
        """ 
             Here I am taking the input array and checking whether the input array contains 1 or not. If it contains 1 then I am 
             calculating the difference in the rows and columns of the position where 1 is present with respect to the middle position 
             which is (3,3) where 1 should be finallly placed. This difference will tell me how many rows and columns I need to swap to 
             achieve a beautiful matrix configuration.
        """
        if(array[j]==1):
            row=3-i-1
            col=3-j-1
            flag=1
            break
        
    if(flag==1):
        break
     
# Now I am printing the sum absolute values of number rows and number of columns to swap to achieve a beautiful matrix configuration.  
print(abs(row)+abs(col))

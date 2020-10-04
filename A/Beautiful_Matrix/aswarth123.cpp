/*
 
  Problem- Beautiful Matrix
  Platform- Codeforces
  Problem Link- http://codeforces.com/contest/263/problem/A
  Language- C++
 
 */

#include <iostream>
using namespace std;

// A simple utility function to calculate the absolute value of an int variable.
int abs(int x)
{
   if(x<0)
      x=x*(-1);
    return(x);
}

int main()
{
  int i,j,row,col,input,flag=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      //This nested loop is for taking input.
      // Here I am taking the input and checking whether the input is equal to 1 or not. If it is equal to 1 then I am 
      // calculating the difference in the rows and columns of the position where 1 is present with respect to the middle position 
      // which is (3,3) where 1 should be finallly placed. This difference will tell me how many rows and columns I need to swap to 
      // achieve a beautiful matrix configuration.
      cin>>input;
      if(input==1)
      {
        // Since there is only one 1 in the matrix I am breaking the loop just after obtaining its row number and column number.
        row=3-i-1;
        col=3-j-1;
        flag=1;
        break;
      }
    }
    if(flag==1)
      break;
  }
 
  row=abs(row);
  col=abs(col);

  cout<<row+col<<endl;

}

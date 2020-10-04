/*
  Problem:Beautiful Matrix
  Problem link:https://codeforces.com/contest/263/problem/A
*/
#include<stdio.h>
#include<stdlib.h>//for abs() function.
int main()
{
    int x,y,ans;
    int A[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          scanf("%d",&A[i][j]); //Taking input
          if(A[i][j]==1)
           {
            x=i+1;y=j+1; // Storing the position of cell in which 1 is present.
           }
        }   
    }
    ans=abs(3-x)+abs(3-y);// where abs(3-x) gives the number of moves required to move 1 to middle of column in which it is present and abs(3-y) gives the number of moves required to move 1 to middle row.
    printf("%d",ans);
    return 0;
}
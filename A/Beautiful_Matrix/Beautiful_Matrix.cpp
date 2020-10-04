/*
 
  Problem- Beautiful Matrix
  Platform- Codeforces
  Problem Link- http://codeforces.com/contest/263/problem/A
  Language- C++
 
 */

#include <iostream>
usiing namespace std;

int main()
{
  int i,j,x,y,k,f=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      cin>>k;
      if(k==1)
      {
        x=3-i-1;
        y=3-j-1;
        f=1
        break;
      }
    }
    if(f==1)
      break;
  }
  if(x<0)
    x=x*(-1);
  if(y<0)
    y=y*(-1)

  cout<<x+y<<endl;

}

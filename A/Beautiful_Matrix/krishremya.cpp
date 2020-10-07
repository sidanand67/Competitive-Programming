#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,A[5][5],a,b,c;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      cin>>A[i][j];
      if(A[i][j]==1)
      {
        a=i;
        b=j;
      }
    }
  }
  c=abs(a-2)+(abs(b-2));
  cout<<c;
}

/*
Problem- Array Cancellation
Problem link- https://codeforces.com/problemset/problem/1405/B
*/
#include<bits/stdc++.h>
#define ll long long 
#define OJ \
        freopen("input.txt","r",stdin); \
        freopen("output.txt","w",stdout);
using namespace std; 
int main()
{
//	OJ;
int T;
cin>>T;
while(T--)
{ 
int n;
cin>>n;
ll int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
ll int pos=0,neg=0,ans=0;
int flag=1;
for(int i=n-1;i>=0;i--)
{ 
   
     if(a[i]>0&&flag)
     {
       pos+=a[i];
      continue;
     }
      if(a[i]>0)
      {
          if(a[i]+neg>=0)
          {
              ans+=a[i]+neg;
              neg=0;
          }
          else{
              
              neg+=a[i];
          }
      }
      else{
          flag=0;
          neg+=a[i];
      }
}
ans+=pos;
cout<<ans<<endl;
   }
}
 

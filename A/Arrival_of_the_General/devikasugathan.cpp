# include<bits/stdc++.h>
using namespace std;
int  n,k,c;
int main()
{
   cin>>n;  // number of soldiers
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>a[k])
       k=i;
       else
       if(a[i]<=a[c])
       c=i;
   }
if(k>c)
cout<<k+n-c-2<<endl;
else
cout<<k+n-c-1<<endl;
 return 0;

}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll l,r,o,e;
  cin>>l>>r;
     if(r-l>=2)
     {
       if(l%2==0)
       e=r/2-l/2+1;
       else
       e=r/2-l/2;
       
 
       if(e>=2)
       {
       	if(l%2==0)
       		cout<<l<<" "<<l+1<<" "<<l+2;
       	else
       		cout<<l+1<<" "<<l+2<<" "<<l+3 ;
       }
       else
       	cout<<"-1";
     }
     else
     	cout<<"-1";
		return 0;
}
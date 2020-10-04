#include <bits/stdc++.h>
using namespace std;
long long MOD=1000000007;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
#define pb push_back
typedef pair<ll,ll> pi;
ll lcm(ll a,ll b)
{
  if(a==0)
    return b; 

  return lcm(b%a,a);
}
int main()
{
IOS();
ll a;
ll b;
cin>>a>>b;
ll d,m;
ll elcm=(a*b)/lcm(a,b);
// cout<<elcm<<endl;
if(a==b)
{
  cout<<"Equal"<<endl;
  return 0;
}
else if(a<b)
{
   d=(elcm-1)/a;
  m=(elcm)/b;
}
else
{
  d=(elcm)/a;
   m=(elcm-1)/b;
}
if(d>m)
  cout<<"Dasha"<<endl;
else if(d<m)
  cout<<"Masha"<<endl;
else
  cout<<"Equal"<<endl;

return 0;
}
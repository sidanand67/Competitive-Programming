#include<bits/stdc++.h>
using namespace std;
#define ll long long int 



int main()
{
   

   ll n,m;
   cin>>n>>m;
   vector<pair<ll,ll>>v;
   for(ll i=0;i<m;i++)
   {
    ll x,y;
    cin>>x>>y;
    v.push_back(make_pair(y,x));
   }
   //sort in increasing order on the basis of no. of matches in a matchbox
   sort(v.begin(),v.end());
   ll count=0,ans=0;
   for(ll i=(m-1);i>=0;i--)
   {
    //if we can add the whole container
    if((n-count)>=v[i].second)
    {
      count+=v[i].second;
      ans+=(v[i].first*v[i].second);
    }
    else
    {
      ans+=((n-count)*v[i].first);
      break;
    }
   }
   cout<<ans;
    return 0;
}

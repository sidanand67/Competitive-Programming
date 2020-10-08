#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tej ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ve vector<int>
#define vl vector<long long int>
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define maxm 1000000007

void solve()
{
  ll n,k;
  cin>>n>>k;
  while(k--)
  {
    if(n%10!=0)
      n--;
    else
      n=n/10;
  }
  cout<<n;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    cin>>t;
    return 0;
}
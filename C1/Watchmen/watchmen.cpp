#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;
#define pb(x) push_back(x);
ll ans=1ll;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0);
#define cases() ll t ; cin>>t; while(t--)
ll MOD=1000000007;
std::vector<ll> g[51];
bool visited[51];
void dfs(ll i)
{
  visited[i]=true;
  for(ll child: g[i])
  {
    if(!visited[child])
    {
      ans*=2;
      dfs(child);
    }
  }
}
ll fact(ll k)
{
  if(k==1)
    return 1;
  return k*fact(k-1);
}
bool isSubSequence(string tobechecked,string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    // If last characters of two strings are matching 
    if (tobechecked[m-1] == str2[n-1]) 
        return isSubSequence(tobechecked, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(tobechecked, str2, m, n-1); 
} 

/*********************************************/
/*********************************************/
/*********************************************/
/*********************************************/
/*********************************************/
/*********************************************/
/*********************************************/

int main()
{
  IOS();
  int n;
  cin>>n;
  map<ll,ll> countx;
  map<ll,ll> county;
  map<ll,map<ll,ll>> paired;
  ll a;
  ll b;
  ll ans=0;
  for (int i = 0; i <n; ++i)
  {
    cin>>a>>b;
    ans+=county[b]+countx[a]-paired[a][b];
    county[b]++;
    countx[a]++;
    paired[a][b]++;
  }
  cout<<ans<<endl;
 
  return 0;
}
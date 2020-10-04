#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x);
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef pair<int,int> pp;

//defined variables pre hand
/*******************************/
int MOD=1000000007;
ll ans=1ll;

/*******************************/


//to find gcd of a number
int gcd(int a,int b)
{
  if(a==0)
    return b;
  else
    return gcd(b%a,a);
}

//binary exponentiation
ll exp(ll a, ll b)
{
    while(b>=1)
    {
      if(b&1)
      {
        ans=(ans*a)%MOD;
      }
      a*=a;
      b=b>>1;
    }
    return ans;
}

//extended eucledian for finding a.x + b.y =gcd(a,b)
int exgcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

//linear diophantine equation
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = exgcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
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
 
  ll n,m,k;
  cin>>n>>m>>k;
  ll a[n+1];
  for(ll i=1;i<=n;i++)
    cin>>a[i];
  ll l,r,d;
  std::vector <pair<ll,ll>> v;
  ll values[m+1];
  for(ll i=1;i<=m;i++)
  {
    cin>>l>>r>>d;
    v.push_back(pp(l,r));
    values[i]=d;
  }
  ll count[m+2]={0};
  ll x,y;
  while(k--)
  {
    cin>>x>>y;
    count[x]+=1;
    count[y+1]+=-1;
  }

  for(ll i=1;i<=m;i++)
  {
    count[i]=count[i-1]+count[i];
    // cout<<"i count[i] "<<i<<" "<<count[i]<<endl;
  }

ll ans[n+2]={0};
  for(ll j=1;j<=m;j++)
  {
    ans[v[j-1].first]+=values[j]*count[j]; 
    ans[v[j-1].second+1]-=values[j]*count[j];
  }
  for(ll i=1;i<=n;i++)
  {
      ans[i]=ans[i]+ans[i-1];
      cout<<a[i]+ans[i]<<" ";
  }
  cout<<endl;


  return 0;
  
}
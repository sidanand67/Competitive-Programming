/*
 "Only i can change my life,no one else can do it for me"
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define ios ios::sync_with_stdio(0),cin.tie(0);
#define runfile freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define ld long double 
#define ll long long int 
#define vi vector<ll>
#define pii pair<ll,ll>
#define mii map<ll,ll>
#define pqi priority_queue<ll>
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(a) (a).begin(),(a).end()
#define forn(i,a,n) for(ll i=a;i<(ll)n;i++)
#define coutt(v) forn(i,0,v.size()) cout<<v[i]<<" "
#define newline cout<<'\n'
#define mod 1e9+7
#define PI 3.14159265
#define N 10000001
 
int main()
{
    ios
 
    #ifndef ONLINE_JUDGE
    runfile
    #endif
 
   ll t;
   cin>>t;
   while(t--)
   {
    ll l,r,m,minn1,minv1,minn2,minv2;
    cin>>l>>r>>m;
    minn1=m%l;
    minv1=l;
    minn2=l-minn1;
    minv2=l;
    for(ll i=l;i<=r;i++)
    {
        ll x=m%i;
        ll y=i-x;
        if(x<minn1)
        {
            minn1=x;
            minv1=i;
        }
        if(y<minn2)
        {
            minn2=y;
            minv2=i;
        }
 
 
    }
   // cout<<minv1;
    if(minn1==0)
        cout<<minv1<<" "<<minv1<<" "<<minv1;
    else if(minn2==0)
        cout<<minv2<<" "<<minv2<<" "<<minv2;
    else if(minn1<=minn2&&(m-minn1)!=0)
        cout<<minv1<<" "<<(l+minn1)<<" "<<l;
    else
        cout<<minv2<<" "<<l<<" "<<(l+minn2);
   
 
 
 
    
    newline;
   }
 
    return 0;
}
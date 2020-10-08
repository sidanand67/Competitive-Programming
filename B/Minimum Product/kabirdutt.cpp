#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ve vector<int>
#define pb push_back
#define fo(i,n) for(int i=1;i<=n;i++)
using namespace std;
ll first(ll a , ll b , ll x , ll y , ll n)
{
	ll t1 = a - x;
	ll t2 = b - y;
	ll c1 = min(t1 , n);
	a = a - c1;
	n = n - c1;
	ll p1 = min(t2 , n);
	b = b - p1;
	n = n - p1;
	ll ans1 = a * b;
	return (ans1);


}
void solve()
{
	ll a , b , x , y , n;
	cin >> a >> b >> x >> y >> n;
	ll ans = min(first(a , b, x , y , n), first(b , a , y , x , n));
	cout << ans << endl;

}


int main()
{
	fast;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
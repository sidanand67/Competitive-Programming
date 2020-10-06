#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define f(a, b, c, d) for(ll a = b; a < c; a += d)

void solve()
{
	string s;
	cin >> s;
	ll sm = 0, bi = 0;  // count of lowercase and uppercase
	f(i, 0, s.length(), 1)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			sm++;
		else
			bi++;
	}
	if (sm >= bi)
		transform(s.begin(), s.end(), s.begin(), ::tolower); // converts whole string to lowercase
	else
		transform(s.begin(), s.end(), s.begin(), ::toupper); // converts whole string to uppercase
	cout << s << "\n";
}

signed main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t = 1;
	//cin >> t;
	while (t--)
		solve();
}
/*  Coded by ghsayan  */
/* Problem Link: https://codeforces.com/contest/677/problem/A */

#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define OJ                            \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
const int mod = 1'000'000'007;
const int N = 3e5;
int arr[N];

void solve()
{
	int i, n, height, minsum = 0, x;
	//Accept array length and height of fence
	cin >> n >> height;
	fo(i, n)
	{
		cin >> x;
		//If height is more than fence then width must be considered 2 or else 1
		if (x > height)
			minsum += 2;
		else
			minsum += 1;
	}
	//Display the minimum width
	cout << minsum;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

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

bool sortbysec(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second > b.second);
}

void solve()
{
    int i, n, m, s = 0;
    cin >> n >> m;
    pair<int, int> a[m];
    // Create a pair of array to store the matchbox quantity and matches present inside each of them.
    fo(i, m) cin >> a[i].first >> a[i].second;
    // We will initially take those matchboxes that has the maximum matches present in them
    // Sort the array according to quantity of matches i.e SECOND
    sort(a, a + m, sortbysec);
    i = 0;
    while (n > 0 && i < m)
    {
        // Add the total matches taken
        s += (min(n, a[i].first) * a[i].second);
        // Accordingly remove the number of matchboxes considered until n becomes 0 or we run out of matchboxes
        n -= min(n, a[i].first);
        i++;
    }
    // Display total matches
    cout << s;
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

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
    string a, b, c;

    //Accept the relation in string format
    cin >> a >> b >> c;

    //Make sure the lesser one is in the left side
    if (a[1] == '<')
        swap(a[0], a[2]);
    if (b[1] == '<')
        swap(b[0], b[2]);
    if (c[1] == '<')
        swap(c[0], c[2]);

    //If any two relations have same the smaller variable
    //it means variable on its left is the smallest of the three
    //that leaves only the third relation whose right variable is largest
    if (a[0] == b[0])
        cout << c[2] << c[0] << a[0];
    else if (b[0] == c[0])
        cout << a[2] << a[0] << b[0];
    else if (c[0] == a[0])
        cout << b[2] << b[0] << c[0];

    //If no two left variable matches then its impossible
    else
        cout << "Impossible";
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
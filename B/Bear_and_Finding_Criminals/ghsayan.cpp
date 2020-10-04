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
    int i, n, a, c, sum = 0;
    cin >> n >> a;
    fo(i, n) cin >> arr[i];
    //If criminal is present in Limaks city itself increase count by 1
    if (arr[a - 1] == 1)
        sum++;
    Fo(i, 1, max(a, n - a + 1))
    {
        //If equal distance in both sides are accessible check for the total criminals
        if (a - i - 1 >= 0 && a + i - 1 < n)
        {
            //If both are 1 then he can surely catch 2 or else he cant be sure in which side the criminal is present
            if (arr[a - i - 1] == 1 && arr[a + i - 1] == 1)
                sum += 2;
        }

        //If only one of the sides is accessible then only 1 criminal must be present
        else if (a - i - 1 >= 0)
        {
            if (arr[a - i - 1] == 1)
                sum += 1;
        }
        else if (a + i - 1 < n)
        {
            if (arr[a + i - 1] == 1)
                sum += 1;
        }
    }
    //Display the total criminals that can be caught for sure
    cout << sum;
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

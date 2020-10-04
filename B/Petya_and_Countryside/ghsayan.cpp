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
    int i, n, c, mx = 0, j, k;
    cin >> n;
    //Take the height of all fences in an array
    fo(i, n) cin >> arr[i];
    fo(i, n)
    {
        c = 1;
        //Now count the total fences before and after the ith fence that are in decreasing order
        //Before i-th fence
        for (j = i; j > 0; j--)
        {
            if (arr[j - 1] <= arr[j])
                c++;
            else
                break;
        }
        //After i-th fence
        for (k = i; k < n - 1; k++)
        {
            if (arr[k + 1] <= arr[k])
                c++;
            else
                break;
        }
        //Store the maximum no. of fences in decreasing order on both side
        if (c > mx)
            mx = c;
    }
    //Display the maximum
    cout << mx;
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

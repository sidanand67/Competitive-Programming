/* C1 - Searching for Graph */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> p;
        int sum = n * 2 + p;
        int x = 1, y = 2;
        while (sum--)
        {
            cout << x << ' ' << y << endl;
            y++;
            if (y > n)
            {
                x++;
                y = x + 1;
            }
        }
    }
    return 0;
}

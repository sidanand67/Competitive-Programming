#include <bits/stdc++.h>

using namespace std;

#define ll long long

string s;
ll l, r, money, n, i, m1, m2, m3, p1, p2, p3, n1, n2, n3, h1, h2, h3;

bool ok(ll x)
{
    m1 = x * n1;
    m2 = x * n2;
    m3 = x * n3;
    m1 = m1 - h1;
    m2 = m2 - h2;
    m3 = m3 - h3;

    if (m1 < 0)
        m1 = 0;
    if (m2 < 0)
        m2 = 0;
    if (m3 < 0)
        m3 = 0;

    if (m1 * p1 + m2 * p2 + m3 * p3 > money)
        return false;
    else
        return true;
}

int main()
{
    cin >> s;
    n = s.length();
    for (i = 0; i < n; i++)
        if (s[i] == 'B')
            n1++;
        else if (s[i] == 'S')
            n2++;
        else if (s[i] == 'C')
            n3++;
    cin >> h1 >> h2 >> h3;
    cin >> p1 >> p2 >> p3;
    cin >> money;

    l = 0;
    r = 100000000000000;
    while (r - l > 1)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
            l = mid;
        else
            r = mid;
    }
    for (i = r; i >= l; i--)
    {
        if (ok(i))
        {
            cout << i;
            return 0;
        }
    }
}

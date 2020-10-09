#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;
using i64 = long long;
using Pii = pair<int, int>;

i64 Solve(i64 n)
{
    i64 ret = 1;
    for (int i = 2; (i64)i * (i64)i <= n; ++i)
    {
        if (!(n % i))
        {
            ret *= (i64)i;
            for (; !(n % i); n /= i)
                ;
        }
    }
    if (n > 1)
        ret *= n;
    return ret;
}

int main()
{
    i64 n;
    while (cin >> n)
    {
        cout << Solve(n) << endl;
    }
    return 0;
}
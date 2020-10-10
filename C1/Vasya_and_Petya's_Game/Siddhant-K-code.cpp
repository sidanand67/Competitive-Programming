#include <bits/stdc++.h>
#define __sz(x) ((int)(x).size())
#define FOR(i, n) for (int i = 0; i < int(n); ++i)
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const int INF = 2e9;
const int N = 300001;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> ans;

    for (int i = 2; i <= n; i++)
    {
        char is_prime = true;

        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                is_prime = false;
            }

        if (!is_prime)
        {
            continue;
        }

        for (int j = i; j <= n; j *= i)
        {
            ans.push_back(j);
        }
    }

    printf("%d\n", ans.size());
    for (int i : ans)
    {
        printf("%d ", i);
    }
}

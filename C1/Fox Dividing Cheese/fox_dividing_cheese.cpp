#include <bits/stdc++.h>
using namespace std;

int a, b;
int res;

void Check(int p)
{
    int u = 0, v = 0;
    while (a % p == 0)
    {
        a /= p;
        u++;
    }
    while (b % p == 0)
    {
        b /= p;
        v++;
    }
    res += abs(u - v);
}

int main()
{
    scanf("%d %d", &a, &b);
    Check(2);
    Check(3);
    Check(5);
    if (a == b)
        printf("%d\n", res);
    else
        printf("-1\n");
    return 0;
}
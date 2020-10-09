#include <bits/stdc++.h>
using namespace std;

const int N = 100100;
int n;
vector<int> g[N];
int a[N];
int b[N];
int m;
int ans = 0;
bool used[N];

void read()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        int v, u;
        scanf("%d%d", &v, &u);
        v--;
        u--;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    return;
}

void dfs(int v)
{
    used[v] = 1;
    if (b[v] > m)
        return;
    int cnt = 0;
    for (int u : g[v])
    {
        if (used[u])
            continue;
        b[u] = b[v] + 1;
        if (a[u] == 0)
            b[u] = 0;
        dfs(u);
        cnt++;
    }
    if (cnt == 0)
        ans++;
    return;
}

int main()
{
    read();
    b[0] = a[0];
    dfs(0);
    printf("%d\n", ans);

    return 0;
}
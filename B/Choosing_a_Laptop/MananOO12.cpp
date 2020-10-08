#include <cstdio>
#include <algorithm> //for min_element

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int speed[n+1], ram[n+1], hdd[n+1], cost[n+1];
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d%d%d%d", &speed[i], &ram[i], &hdd[i], &cost[i]);
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j])
            {
                cost[i] = 1001; // 100 <= cost <= 1000
            }
        }
    }

    printf("%u\n", min_element(cost + 1, cost + 1 + n) - cost);

    return 0;
}

#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int height[n+1], left[n+1] = {0}, right[n+1] = {0};
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &height[i]);
    }

    for (int i = 1; i < n; ++i)
    {
        left[i] = (height[i] >= height[i-1] ? left[i-1] + 1 : 0);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        right[i] = (height[i] >= height[i+1] ? right[i+1] + 1 : 0);
    }

    int maximalWater(0);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] + right[i] + 1 > maximalWater)
        {
            maximalWater = left[i] + right[i] + 1;
        }
    }
    printf("%d\n", maximalWater);
    return 0;
}


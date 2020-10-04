/*
 *
 * Problem- Vanya and Fence
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/677/problem/A
 * Langugae- C
 * 
 */

#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int temp, count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp > h)
            count += 2;
        else
            count++;
    }
    printf("%d", count);

    return 0;
}

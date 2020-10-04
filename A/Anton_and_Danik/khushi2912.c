/*
 *
 * Problem- Anton and Danik
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/734/problem/A
 * Langugae- C
 * 
 */

#include <stdio.h>

int main()
{
    int games;
    int count_anton = 0;
    int count_danik = 0;
    scanf("%d", &games);
    char winner;
    int i;
    scanf("%c", &winner);
    for (i = 0; i < games; i++)
    {
        scanf("%c", &winner);
        if (winner == 'A')
            count_anton++;
        else
            count_danik++;
    }

    if (count_anton > count_danik)
        printf("Anton");
    else if (count_danik > count_anton)
        printf("Danik");
    else
        printf("Friendship");
}   

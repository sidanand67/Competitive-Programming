//Problem Link : https://codeforces.com/contest/236/problem/A
//Problem 236A, Codeforces
//A.Boy or Girl

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

     //input string x
     char x[105];
     scanf("%s", x);

     //count will keep check on how many distinct characters are present
     int count = 0;
     int n = strlen(x);

     for (int i = 0; i < n; i++)
     {
          int j;
          for (j = 0; j < i; j++)
               if (x[i] == x[j])
                    break;

          //if indices match means there's a distinct character present
          if (j == i)
               count++;
     }

     //parity to be checked for determining the gender
     //if count is even means distinct characters are even
     //means its a girl
     //else its a boy

     //printf("%d\n", count);
     if ((count % 2) != 0)
          printf("%s\n", "IGNORE HIM!");
     else
          printf("%s\n", "CHAT WITH HER!");

     return 0;
}
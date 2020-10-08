// problem link -> https://codeforces.com/contest/231/problem/A
// programming in c language;
#include<stdio.h>
int main()
{
    int noOfProblems;  // variable to hold no of problem;
    scanf("%d",&noOfProblems);

    int counter=0;    // counter variable to hold total no of problem solves by Petya, Vasya and Tonya;

    for(int i=0;i<noOfProblems;i++)
    {
      int Petya, Vasya, Tonya;  //no of problem solved by Petya, Vasya and Tonya;
      scanf("%d%d%d",&Petya,&Vasya,&Tonya);
      if((Petya + Vasya + Tonya)>=2)
      counter++;
    }
    printf("%d",counter);

return 0;
}
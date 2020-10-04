/*  Coded by Chaitanya Goel  */
/* Problem Link: https://codeforces.com/contest/791/problem/A */
#include <stdio.h>

int main()
{
    	int a,b,year=0;
    	scanf("%d",&a);
    	scanf("%d",&b);
    	while(a<=b)       //running the loop until the size of bear A is less than size of Bear B
    	{
    		a*=3;         // updating size of bear A
    		b*=2;         // updating size of bear A
    		year++;       // updating the year  variable 
    	} 
    	printf("%d\n", year);     //printing the year after which size of Bear A is greater than Bear B
}

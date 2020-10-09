//Problem Link : https://codeforces.com/contest/59/problem/A
//Problem 59A, Codeforces
//A.WORD

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

void solve()
{
	//input x : string with (upper + lower) cases
	//Vasya gives us string x as input
	char x[105];
	scanf("%s", x);

	//use of functions
	//1. islower(), 2. isupper()
	//countlower, countupper variables

	int countlower = 0, countupper = 0;
	for (int i = 0; i < strlen(x); i++)
	{
		if (islower(x[i]))
			countlower++;
		else
			countupper++;
	}

	//checking count of upper and lower case characters in string x;

	//if count of lower case characters is greater than or equal to upper case characters
	//then we print the whole string in lower case
	//otherwise
	//in uppercase

	//use of functions
	//1. tolower(), 2. toupper()

	if (countlower >= countupper)
	{
		for (int i = 0; i < strlen(x); i++)
		{
			printf("%c", tolower(x[i]));
		}
	}
	else
	{
		for (int i = 0; i < strlen(x); i++)
		{
			printf("%c", toupper(x[i]));
		}
	}

}
int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
	return 0;
}
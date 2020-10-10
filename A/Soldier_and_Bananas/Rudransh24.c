//Problem Link : https://codeforces.com/problemset/problem/546/A
//Problem 546A, Codeforces
//A.Soldier and Bananas

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

void solve()
{
	//input 3 integers k, n, w;
	//k = initial amount of banana
	//n = initial dollars we have
	//w = no. of bananas we want

	int k, n, w;
	scanf("%d%d%d", &k, &n, &w);

	//a series is formed
	//k + 2k + 3k ....... + wk;
	//(1 + 2 + 3 + 4 + ....... + w)*k
	//((w * (w + 1))/2)*k
	//this formula gives total amount we require

	w = (w * (w + 1)) / 2;
	k *= w;

	if (k <= n)
	{
		printf("%d\n", 0);
		//if amount to be paid is less than or equal to the initial amount
		//we can easily buy the bananas without borrowing money.
	}
	else
	{
		printf("%d\n", k - n);
		//else
		//we must borrow remaining $(k - n)
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
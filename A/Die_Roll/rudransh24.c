//Die Roll Codeforces
//link : https://codeforces.com/problemset/problem/9/A

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	//input Yakko's and Wakko's results.
	int y, w;
	scanf("%d%d", &y, &w);
	int max_1;
	if (y >= w)
		max_1 = y;
	else
		max_1 = w;

	int num = 6 - max_1 + 1;
	int den = 6;
	int gcd;

	for (int i = 1; i <= num  && i <= den; i++)
	{
		// Checks if i is factor of both integers
		if (num % i == 0 && den % i == 0)
			gcd = i;
	}

	printf("%d", num / gcd);
	printf("/");
	printf("%d\n", den / gcd);

	return 0;
}
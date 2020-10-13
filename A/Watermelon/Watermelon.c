#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int t;
	//input integer t
	scanf("%d", &t);

	// if the number is odd or number is 2
	// then print NO.
	// else it is valid and print YES.

	if (t % 2 != 0 || t == 2)
		printf("%s\n", "NO" );
	else
		printf("%s\n", "YES" );
	return 0;
}
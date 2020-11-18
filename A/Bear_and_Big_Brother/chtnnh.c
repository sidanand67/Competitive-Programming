#include<stdio.h>

int main(void) {
	int a, b, i;
	scanf("%d%d", &a, &b);
	if (a == b) {
		printf("1\n");
		return 0;
	}
	for (i = 0; a < b; ++i) {
		a *= 3;
		b *= 2;
	}
	printf("%d\n", i);
	return 0;
}

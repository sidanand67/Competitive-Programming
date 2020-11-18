#include<stdio.h>

int main(void) {
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a && b || b && c || c && a)
			count++;
	}
	printf("%d\n", count);
	return 0;
}

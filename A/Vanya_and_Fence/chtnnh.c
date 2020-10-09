#include<stdio.h>


int main(void) {
	int n, h;
	scanf("%d%d", &n, &h);
	int arr[n], width = 0;
	for (int i= 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > h)
			width += 2;
		else
			width++;
	}
	printf("%d\n", width);
	return 0;
}

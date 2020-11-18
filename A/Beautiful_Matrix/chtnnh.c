#include<stdio.h>

int main(void) {
	int arr[5][5], x, y;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1) {
				x = i;
				y = j;
			}
		}
	}
	x -= 2;
	y -= 2;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	printf("%d\n", x + y);
	return 0;
}

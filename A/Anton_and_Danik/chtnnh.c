#include<stdio.h>

int main(void) {
	int n, anton = 0, danik = 0;
	scanf("%d", &n);
	char arr[n];
	scanf("%s", arr);
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'A')
			anton++;
		else
			danik++;
	}
	if (anton > danik)
		printf("Anton\n");
	else if (anton == danik)
		printf("Friendship\n");
	else
		printf("Danik\n");
	return 0;
}

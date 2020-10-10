#include<stdio.h>


int main(void) {
	int numberOfFriends, heightOfFence;
	scanf("%d%d", &numberOfFriends, &heightOfFence);
	int arr[n], width = 0;
	for (int i= 0; i < numberOfFriends; i++) {
		scanf("%d", &arr[i]);
		// if height is greater than height of fence widhth increased by 2
		if (arr[i] > heightOfFence)
			width += 2;
		// else width increased by 1
		else
			width++;
	}
	printf("%d\n", width);
	return 0;
}

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	// input length of array
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	// sort array using library function
	sort(arr, arr+n);
	// output array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

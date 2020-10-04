/*  Coded by sidanand67  */
/* Problem Link - https://codeforces.com/contest/677/problem/A */

#include "bits/stdc++.h"
using namespace std;


int main() {

	int numberOfFriends, fenceHeight;
	cin>> numberOfFriends >> fenceHeight;

	vector<int> heightOfFriends(numberOfFriends);
	for (int i = 0; i < numberOfFriends; i++) {
		cin>> heightOfFriends[i];
	}

	int roadWidth = 0;
	for (int i = 0;i < numberOfFriends; i++) {
		if (heightOfFriends[i] > fenceHeight) {
			roadWidth += 2;
		}
		else {
			roadWidth++;
		}
	}

	cout<< roadWidth;


	return 0;
}
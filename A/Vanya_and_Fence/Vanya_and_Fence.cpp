/*  Coded by sidanand67  */
/* Problem Link: https://codeforces.com/contest/677/problem/A */

#include "bits/stdc++.h"
using namespace std;


int main() {
	int numberOfFriends, heightOfFence;
	cin>> numberOfFriends >> heightOfFence;

	vector<int> heightOfPersons(numberOfFriends);
	for (int i = 0; i < numberOfFriends; i++) {
		cin>> heightOfPersons[i];
	}

	int widthOfRoad = 0;
	for (int i = 0; i < numberOfFriends; i++) {
		if (heightOfPersons[i] > heightOfFence) {
			widthOfRoad += 2;
		}
		else {
			widthOfRoad++;
		}
	}

	cout<< widthOfRoad;

	return 0;
}
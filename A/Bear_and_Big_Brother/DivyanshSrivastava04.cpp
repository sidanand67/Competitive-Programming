#include<bits/stdc++.h>
using namespace std;

int main() { 
	int weight_limak,weight_bob,years=0;
	cin >> weight_limak >> weight_bob;

	//simulating the process until limak weighs more than bob.
	while (weight_limak <= weight_bob) {
		weight_limak*=3;
		weight_bob*=2;

		years++;
	}

	cout << years;

	return 0;
}
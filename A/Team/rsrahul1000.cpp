// Created by Rahul Sharma (rsrahul1000)
#include <bits/stdc++.h>

// defining a faster way to write for loop
#define fo(i,n) for(int i=0;i<(n);++i)
#define INF 1000000000000000000
#define MOD 1000000009;

using namespace std;
using ll = long long;

signed main(){
	// This makes the program take input faster(used to deal with Time Limit Exceed Problems)
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, petya, vasya, tonya, count = 0;
	// Number of problems
	cin >> n;
	fo(i, n) {
		cin >> petya >> vasya >> tonya;
		// Implement a solution if atleast 2 of them are sure about the solution so thats why >= 2
		if ( vasya + tonya + petya >= 2 )
			count++;
	}
	cout << count;
	return 0;
}
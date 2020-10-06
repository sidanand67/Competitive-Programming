
#include<bits/stdc++.h>
using namespace std;

#define fi              first
#define se              second
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define pai             pair<ll,ll>
#define vi              vector<ll>
#define mpi             map<ll,ll>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inp(tc)         int tc; cin>>tc; while(tc--)
#define fast_io         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*
Approach:-
Created a 2 hash arrays named "hash" and "city" which will store the criminals and
number_of_cities  from given root city respectively at particular distance(distance is index 0-based).

return the answer if number_of_cities equals criminals at particular distance.
*/

int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input.txt
	freopen("input4.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output4.txt", "w", stdout);
#endif

	fast_io;
	int n, a;
	cin >> n >> a;  // n is number of cities and 'a' is city in which limik live
	int arr[n];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int hash[n] = {0};
	int dist;
	int city[n] = {0};

	for (int i = 1; i <= n; i++) {
		dist = abs(i - a);      // dist from root city
		if (arr[i] == 1) {
			hash[dist]++;       // storing the criminals at dist from root city
		}
		city[dist]++;           // storing the dist of cities possible from root city

	}

	int criminals = hash[0];

	for (int i = 1; i < n; i++) {
		if (hash[i] > 0 and city[i] > 0 and hash[i] == city[i]) {   // checking if at indexed distance cities possible equals criminals then add criminals
			criminals += hash[i];
		}
	}
	cout << criminals << "\n";

}
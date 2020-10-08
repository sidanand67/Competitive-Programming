
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
#define sahi			true
#define galat 			false

/*
Approach:-
First make the finalArr which is required.

For additional walks , find the difference in walks from finalArr and given array at each position i
keep adding that difference in variable.

So the trick here is to make the finalArr, required value at each position "i" is finalArr[i]=k-(finalArr[i-1]+walks[i]).
*/


int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input.txt
	freopen("codeforcesInp.txt", "r", stdin);
	//for writing output to output.txt
	freopen("codeforcesOut.txt", "w", stdout);
#endif

	fast_io;

	int n, k;
	cin >> n >> k;

	int walks[n];
	for (int i = 0; i < n; i++) {
		cin >> walks[i];
	}

	int final_arr[n];
	final_arr[0] = walks[0];

	for (int i = 1; i < n; i++) {
		final_arr[i] = (k - final_arr[i - 1] - walks[i]);
		if (final_arr[i] <= 0) {        //CHECK if finalArr[i] is less than equals 0, then update it with intial given walks[i] value
			final_arr[i] = walks[i];
		} else {
			final_arr[i] += walks[i];   //else add the given walks[i] value with required value which we found in finalArr[i]
		}
	}

	int additional_walk = 0;
	for (int i = 0; i < n; i++) {
		additional_walk += (final_arr[i] - walks[i]);       //keep tracking of additional walk required by subtracting it from given walks[i] at each position
	}

	cout << additional_walk << "\n";
	for (int i = 0; i < n; i++) {
		cout << final_arr[i] << " ";
	}

}

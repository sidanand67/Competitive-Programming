
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

First change the both strings into lowercase or uppercase then compare them lexicographically.
*/

int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input.txt
	freopen("codeforcesInp.txt", "r", stdin);
	//for writing output to output.txt
	freopen("codeforcesOut.txt", "w", stdout);
#endif

	fast_io;

	string s1, s2;
	cin >> s1 >> s2;

	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);		// String1 to lowercase
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);	    // String 2 to lowercase

	int flag = 0;
	for (int i = 0; i < s1.size(); i++) {

		if (int(s1[i]) - int(s2[i]) == 0 ) {	//Checking if Ascii value of both string equals then skip the iteration
			continue;
		} 
		else if (int(s1[i]) > int(s2[i])) {		//Checking if ascii value of string1 > string2, then break out of loop with flag equals 1
			flag = 1;
			break;
		} 
		else {
			flag = 2;							// when ascii value of string2 > string1, then flag becomes 2, loop is break;
			break;
		}
	}

	//Finally, deciding on flag value print the required output
	if (flag == 0) {
		cout << "0" << "\n";
	} else if (flag == 1) {
		cout << "1" << "\n";
	} else {
		cout << "-1" << "\n";
	}

}

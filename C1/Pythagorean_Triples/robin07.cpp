
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
#define count_dig(val)	1+floor(log10(val))

/*
Approach:-

The key thing to solve this problem is observation and pythagoras theorem

Case-1:-
when given side is odd, the square of given side equals sum of other 2 sides like side1*side1=side2+side3
So it can be concluded that side2 equals side1^2/2 and side3 equals side1^2/2+1.

Case-2:-
when given side is even, the square of given side equals squared sum of other 2 sides like, side1*side1=side2^2+side3^3
So it can be concluded that side2=side1^2/4-1 and side3=side1^2/4+1
*/

int main() {
#ifndef ONLINE_JUDGE
	//for reading input from codeforcesInp.txt
	freopen("codeforcesInp.txt", "r", stdin);
	//for writing output to codeforcesOut.txt
	freopen("codeforcesOut.txt", "w", stdout);
#endif

	fast_io;

	ll side1, side2, side3;
	cin >> side1;

	if (side1 & 1 == 1) {
		side2 = ((side1 * side1) / 2);
		side3 = ((side1 * side1) / 2) + 1;
		if (side1 == 0 or side2 == 0) { // keeping the case when side1=1
			cout << "-1" << "\n";
		} else {
			cout << side2 << " " << side3 << "\n";
		}
	} else {
		side2 = ((side1 * side1) / 4) - 1;
		side3 = ((side1 * side1) / 4) + 1;
		if (side1 == 0 or side2 == 0) { // keeping the case when side1=2
			cout << "-1" << "\n";
		} else {
			cout << side2 << " " << side3 << "\n";
		}
	}

}

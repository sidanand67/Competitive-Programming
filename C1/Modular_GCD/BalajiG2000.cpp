
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int M=1e9+7; // This is used to take modular calculation
int t;
ll a, b, n, m, pa, pb, s; // defining the respective variables and few temporary variables

inline ll gcd(ll a, ll b) {   // This funtion calculates the power of two given numbers , in order to calculate the GCD
	if(a&&b) // Compares two numbers and proceeds further
		while((a%=b)&&(b%=a));
	return a^b; // Returns the power of two numbers after calcluation
}

inline ll exp(ll b, ll p, ll m) { // This function solves the calculation of exponential part
	ll r=1;
	while(p) {
		if(p&1)
			r=(__int128)r*b%m;
		b=(__int128)b*b%m;
		p/=2;
	}
	return r; // Returns the value of final exponential value calculated
}

inline void solve() {  //  This function gets input for the each and every test case and solves the output
	cin >> a >> b >> n;
	m=a==b?M:a-b;
	s=(exp(a, n, m)+exp(b, n, m))%m;
	cout << gcd(a-b, s)%M << "\n"; // Prints the final output for the given test case
}

int main() {
	ios_base::sync_with_stdio(0); // For faster input and output operations
	cin.tie(0);
	
	cin >> t;  // Taking input for number of test cases
	while(t--)
		solve(); // Calling solve function t number of times in order to caculate the result
}

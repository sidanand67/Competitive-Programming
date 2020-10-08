#include <iostream>
typedef long long ll;
using namespace std;

int main() {
	
    ll n;
    cin >> n;
    
    if (n == 2) {
	cout << 1;
    }else {
	// first the largest fibonacci number less than n
	ll first = 2, second = 3;
	ll index = 2;
	// index contains the index of fibonacci number stored in second 
	while (second <= n) {
	    // calculate next fibonacci number
	    ll t = first + second;
	    first = second;
	    second = t;
	    if (second > n) {
		// if second is greater than n then display previous index
		cout << index;
		return 0;
	    }
	    ++index;
	}
    }
    return 0; 
}

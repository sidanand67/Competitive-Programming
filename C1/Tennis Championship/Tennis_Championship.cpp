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
	while (second <= n) {
	    ll t = first + second;
	    first = second;
	    second = t;
	    if (second > n) {
		cout << index;
		return 0;
	    }
	    ++index;
	}
    }
    return 0; 
}

#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int counter = 0;
	int len = s.length();
	
	// as long as the number consists of more than 1 digit,
	// the condition is true
	while(len>1){
		int sum = 0;
		for (int i=0; i<len; i++){
			// add all the digits to sum
			sum += s[i]-'0';
		}
		
		// update the string that we are working on
		s = to_string(sum);
		
		// also update its length
		len=s.length();
		
		// increment the counter to print at the end
		++counter;
	}
	
	cout << counter;
	
	return 0;
}
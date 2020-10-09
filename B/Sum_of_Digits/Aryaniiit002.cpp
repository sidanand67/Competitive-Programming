//============================================================================
//problem link:http://codeforces.com/contest/102/problem/B
// Author      : Aryan Bindal
// Version     :
//status:accepted
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	 string s;
	 cin>>s;
	 int counter=0;
	 int len=s.length();
	// Loop will continue as long as length is more than 1 digit,or the condition is true until len is more than 1
	while(len>1){
		int sum=0;
		for(int i=0;i<len;i++){
			// add all the digits to sum
			sum+=s[i]-'0';
		}
		// update the string that we are working on
		 s=to_string(sum);
		// Change its length
         len=s.length();
         ++counter;
	 }
	 cout<<counter;
	return 0;
}

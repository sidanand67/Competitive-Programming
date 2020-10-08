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
	while(len>1){
		int sum=0;
		for(int i=0;i<len;i++){
			sum+=s[i]-'0';
		}
		 s=to_string(sum);
         len=s.length();
         ++counter;
	 }
	 cout<<counter;
	return 0;
}

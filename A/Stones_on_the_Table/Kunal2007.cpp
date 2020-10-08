/*
Problem Name: Stones on the Table.
Problem Link: https://codeforces.com/contest/266/problem/A
Language Used: CPP
*/

#include<iostream>
using namespace std;

int main(){
	int n; //Number of Stones.
	string str; //Stones' colour sequence.
	cin>>n>>str;
	
	int answer=0; //Initializing the answer.
	
	for(int i=1; i<n; i++){ //Iterating through the sequence.
	
		if(str[i]==str[i-1]){ //Comparing for same adjacent colour stones.
			answer++; //Incrementing the answer.
		}
		
	}
	
	cout<<answer<<endl; //Printing the answer.
	
	return 0;
}

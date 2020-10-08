/*
Problem Name: Sum of Digits
Problem Link: https://codeforces.com/contest/102/problem/B
Language Used: CPP
*/

#include<iostream>
using namespace std;

int main(){
	string number; //Inputting the large number in the form of a string.
	cin>>number;
	
	int sum=0; //Initializing the sum of digits.
	int counter=0; //Initializing the counter.
	
	while(number.size() > 1){ //Iterating until the number is not a single digit.
	
		for(int i=0; i<number.size(); i++){ //Interating through the number.
			sum+=(number[i]-'0'); //Adding the digits to the sum.
		}
		
		number=to_string(sum); //Assigning string value of the sum to the number.
		counter++; //Incrementing the counter.
		
	}
	
	cout<<counter<<endl; //Printing the counter.
	
	return 0;
}

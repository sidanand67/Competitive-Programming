#include<iostream>
using namespace std;

int main(){
	int n; //Length of password.
	int k; //Number of distinct letters inside a password.
	cin>>n>>k;
	
	string password;
	int c=0; //initializing the counter.
	
	for(int i=0; i<n; i++){
		password+=char(97 + (c%k)); //addition of a letter distinct from the previous one.
		c++; //incrementing the counter.
	}
	cout<<password<<<endl;
}

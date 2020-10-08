/*
** Problem Name: Soldier and Bananas
** Problem Link: https://codeforces.com/problemset/problem/546/A
** Sol Language: CPP
*/

#include<iostream>
using namespace std;

int main(){
	int k; //Price of first banana.
	int n; //Number of dollars soldier has.
	int w; //Number of bananas soldier wants to buy.
	cin>>k>>n>>w;

	int price=((k*w*(w+1))/2); //Price of w bananas.

	if(price <= n){
		cout << 0 << endl; //No extra dollars needed to buy the bananas.
	}

	else{
		cout << (price-n) << endl; //Amount of dollars soldier need to borrow from his friend.
	}

	return 0;
}

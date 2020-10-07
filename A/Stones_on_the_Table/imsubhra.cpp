#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	char s[255];
	cin >> n; //no of stones in the table
	for(int i = 0; i < n; i++){
		cin >> s[i];
	} //colours of stones
	int cnt = 0; //variable to count minimum no of stones to take from the table so that any two neighbour stones had differemt colours
	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]) {
			cnt++; // if adjacent colours are same then increment the cnt variable
		}
	}
	cout << cnt;
	return 0;
}

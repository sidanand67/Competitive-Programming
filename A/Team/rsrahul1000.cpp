// Created by Rahul Sharma (rsrahul1000)
#include <bits/stdc++.h>

#define fo(i,n) for(int i=0;i<(n);++i)
#define INF 1000000000000000000
#define MOD 1000000009;

using namespace std;
using ll = long long;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, petya, vasya, tonya, count = 0;
	cin >> n;
	fo(i, n) {
		cin >> petya >> vasya >> tonya;
		if ( vasya + tonya + petya >= 2 )
			count++;
	}
	cout << count;
	return 0;
}
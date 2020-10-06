#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 1;
	string s;
	cin >> n >> s;
	for (int i = 1; i < n; ++i)
	{
		string sn;
		cin >> sn;
		if (sn[0] != s[0]) // s stores previous string and sn stores the current string
		{
			c++;   // increasing count when the consecutive magnets of different type
			s = sn;
		}
	}
	cout << c;
}
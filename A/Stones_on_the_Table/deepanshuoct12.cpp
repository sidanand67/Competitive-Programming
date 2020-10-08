#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;		// n = number of stones
	cin>>n;
	string stones;//string of colors
	cin>>stones;
	int ans = 0;

	for (int i = 1; i < stones.length(); ++i)
	{
		if(stones[i] == stones[i-1])
		{
			ans++;
		}
	}

	cout<<ans<<"\n";
}


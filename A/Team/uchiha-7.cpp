#include <iostream>
using namespace std;

// problem link: http://codeforces.com/problemset/problem/231/A

int main()
{
	int n;
	// n represents number of problems 
	cin>>n;
	int count=0;
	for(int i = 1; i <=n; ++i) 
	{
		int petya, vasya, tonya;
		cin >> petya >> vasya >> tonya;
		if (petya + vasya + tonya >= 2)
		    count++;
            
	}

	cout<<count<<endl;
	return 0;
}


/*
Sample Input
3
1 1 0
1 1 1
1 0 0
*/

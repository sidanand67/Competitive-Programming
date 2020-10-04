#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	int k1;
	queue<int> a;
	cin>>k1;
	int temp;
	for (int i = 0; i < k1; ++i)
	{
		cin>>temp;
		a.push(temp);
	}
	int k2;
	cin>>k2;
	queue<int> b;
	map<int,int> count;

	for (int i = 0; i < k2; ++i)
	{
		cin>>temp;
		b.push(temp);
	}
	int flag=0;
	int fight=0;
	int win=0;
	while(1)
	{
		if(fight>1000006)
		{
			flag=1;
			break;
		}

		if(a.empty())
		{
			win=2;
			break;
		}
		else if(b.empty())
		{
			win=1;
			break;
		}

		fight++;
		int iska=a.front();
		int uska=b.front();
		count[iska]=uska;
		count[uska]=iska;
		if(iska<uska)
		{
			a.pop();
			b.pop();
			b.push(iska);
			b.push(uska);
		}
		else
		{
			a.pop();
			b.pop();
			a.push(uska);
			a.push(iska);
		}

	}
	if(flag)
		cout<<-1<<endl;
	else
		cout<<fight<<" "<<win<<endl; 



	return 0;


}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	map<char,string> count;
	count['2']="2";
	count['3']="3";
	count['4']="322";
	count['5']="5";
	count['6']="53";
	count['7']="7";
	count['8']="2227";
	count['9']="3327";
	string s;
	cin>>s;
	string temp="";
	// sort(s.begin(),s.end(),greater<char>());
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='1' || s[i]=='0')
			continue;
		else
			temp+=count[s[i]];

	}
	sort(temp.begin(),temp.end(),greater<char>());
	cout<<temp<<endl;
	// cout<<endl;
	return 0;

}
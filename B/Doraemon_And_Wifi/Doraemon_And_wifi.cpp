#include <bits/stdc++.h>
using namespace std;
 
int f(int n,int h) 
{
	if(n)
		return f(n-1,h+1)+f(n-1,h-1);
	else if(h==0) return 1;
	else return 0;
}
 
string a,b;
int c,d,e;
 
int main() 
{
	cin>>a>>b;
	for(int i=0;i<a.size();i++) 
	{
		if(a[i]=='+') c++;
		if(a[i]=='-') c--;
		if(b[i]=='+') d++;
		if(b[i]=='-') d--; 
		if(b[i]=='?') e++;
	}
	cout<<fixed<<setprecision(12)<<f(e,c-d)/pow(2,e);
 
}

#include <iostream>
using namespace std;

int main() {
    int n,i,a=0,d=0;
	cin>>n;
	char str[n];
	cin>>str;
    //checking each charcter and incrementing the counter a, which represents anton and, d, which represents danik
	for(i=0;i<n;i++)
	{
	    if(str[i]=='A')
	    a++;
	    else
	    d++;
	}
	//checking if who has greater counter points and printing the output 
	if(a>d)
	cout<<"Anton";
	else if(d>a)
	cout<<"Danik";
	else
	cout<<"Friendship";
	return 0;
}

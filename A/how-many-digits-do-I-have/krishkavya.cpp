#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	//checking if number less than 10
	if(n<10)
	{
	    cout<<"1";
	}
	//checking if number less than 100
	else if(n<100)
	{
	    cout<<"2";
	}
	//checking if number less than 1000
	else if(n<1000)
	{
	    cout<<"3";
	}
	else 
	{
	    cout<<"More than 3 digits";
	}
	return 0;
}


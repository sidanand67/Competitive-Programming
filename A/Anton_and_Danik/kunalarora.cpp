#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
	cin>>len;
	string s;
	int a=0; //Representing Anton
	int d=0; //Representing Danik
	for(i=0;i<s.size();i++)
	{
	    if(s[i]=='A'){
		    //Belongs to Anton.
		    a++;
	    }
	    else if(s[i]=='D'){
		    //Belongs to Danik.
		    d++;
	    }
	    else{
		    //It belongs to neither Anton nor Danik.
	    }
	}
	//checking if who has greater counter points and printing the output 
	if(a>d){
		//Anton won!!
		cout<<"Anton";
	}
	else if(d>a){
		//Danik won!!
		cout<<"Danik";
	}
	else{
		//Neither of them won, Friendship condition.
		cout<<"Friendship";
	}
	return 0;
}

/*
Problem Name: Queue at the School
Problem Link: https://codeforces.com/problemset/problem/266/B
Language Used: CPP
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; //Number of children in the queue
	int t; //Time elapsed
	string queue; //Queue sequence of the children
	cin>>n>>t>>queue;
	
	while(t--){ //Reviewing the queue after each second
		
		string temp; //Creating a temporary string.
		for(int i=0; i<n; i++){ //Iterating through the sequence.
			if(queue[i]=='G' && i>0 && queue[i-1]=='B'){ //Checking for the condition.
				temp[temp.size()-1]='G'; //Swapping the positions.
				temp+='B';
			}
			else{
				temp+=queue[i];
			}
		}
		queue=temp;
		
	}
	cout<<queue<<endl; //Printing the final sequence after t seconds.
	
	return 0;
}

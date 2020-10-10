#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string s;//Declared string
	int i,count=0,j;//counters
	getline(cin,s);// Used getline to take spaces in input
    for(i=0;i<s.length()-1;i++)//Used s.length() to get length of string.
    {
        for(j=i+1;j<s.length();j++)//Used s.length() to get length of string.
        {
            if(s[i]!=','&& s[i]!=32 &&s[i]!='{'&&s[i]!='@')
            {
                if(s[i]==s[j])
                {
                    s[j]='@';
                }
            }
        }
    }
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        count++;
    }
    cout<<count;// printing count
	return 0;
}
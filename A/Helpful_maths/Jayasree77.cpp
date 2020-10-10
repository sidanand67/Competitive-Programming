//Problem 339A Helpful Maths
//<a href="https://codeforces.com/problemset/problem/339/A">

#include<bits/stdc++.h>
using namespace std;
int main() {
string s,s1="";
cin>>s;
char c='+';
int size = s.size();
sort(s.begin(),s.end());
for(int i=0;i<size;i++){    
  if(s[i]=='+')continue;
    else{
      s1+=s[i];
      s1+=c;
    }
  }
s1.replace(size,1,"");
cout<<s1;
return 0;
}
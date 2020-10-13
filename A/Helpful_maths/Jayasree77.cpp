#include<bits/stdc++.h>
using namespace std;
int main() {
string s,s1="";
cin>>s;
char c='+';
int size = s.size();
//Taking the input as string and sorting it
sort(s.begin(),s.end());
for(int i=0;i<size;i++){  
    //If s[i] is '+' skip else add the number to the empty string and add '+' after the number  
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
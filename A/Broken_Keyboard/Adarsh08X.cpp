#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
     string s;
     cin>>s;
     if(s.size()==1){
       cout<<s[0]<<endl;
       continue;
     }
     int a[26]={0},l=0,r=0,len=1;
     char cc=s[0];
      set<char> correct;
     while(1)
     {
      
       while(r<s.size())
       {if(s[r]==cc){
          r++;
       }
       else{
         cc=s[r];
         break;
       }
       }

       len=r-l;
       if(len%2!=0){
         a[s[r-1]-'a']=-1;
       }
       if(r==s.size())
       {
         break;
       }
      l=r;
      }
   for(int i=0;i<26;i++)
   {
     if(a[i]==-1)
     {
       cout<<char(i+97);
     }
   }
cout<<endl;
  }
    }

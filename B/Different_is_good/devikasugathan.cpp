#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
    string s;
  cin>>s;
  int l =s.length();
  int c=0;
  if(l<27)
  {
        for(int i=0;i<l-1;i++)
      {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==s[j]){
                c++;
                break;
            }
        }
      }
  }
  else
  c=-1;
      if(c<26)
      cout<<c;
      else
      cout<<-1;

}

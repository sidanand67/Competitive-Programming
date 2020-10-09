#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define tej ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);// for fast input output
#define ve vector<int>
#define vl vector<long long int>
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define maxm 1000000007

void solve()
{
  ll number,k; // here k is the number of times we are performing operations
  cin>>number>>k;
  while(k--)// looping Ktimes
  {
    if(number%10!=0)
      number--;
    else
      number=number/10;   
  }
  cout<<number;
}
int main()
{
    int test=1;
    while(test--)
    {
        solve();//calling function solve()
    }
    cin>>test;// to take last input i.e 0
    return 0;
}
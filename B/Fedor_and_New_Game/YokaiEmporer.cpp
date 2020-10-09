/*
** Problem Name: Fedor and New Game
** Problem Link: https://codeforces.com/contest/467/problem/B
** Sol Language: C++
*/

#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
using namespace std;

/*
And every person with Fedor to find the set bits 
count the number of set bits in the resultant number
if the # bits are less than or equal to k increase friend count
*/
int main()
{
    int n,m,k,temp,temp2;
    int fcnt=0; //friend count 
    cin>>n>>m>>k;
    temp=m+1;
    vector<ll> arr;//store in vector for iteration
    while(temp-->0)
    {
        cin>>temp2;
        arr.pb(temp2);
    }
    int pivot=arr.back(); //get fedor's number
    for(int i=0;i<m;i++)
    {
       
        // use AND to count the set positions in Fedor's number and others numbers
        //use builtin function pop count to count the # set bits of the number in O(1) time 
        int types=__builtin_popcount(pivot^arr[i]);
        
        if(types<=k)
        fcnt++;
    }
    cout<<fcnt<<endl; //print friends
    return 0;
}
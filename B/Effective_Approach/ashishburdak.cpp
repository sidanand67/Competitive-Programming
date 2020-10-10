/*
 *
 * Problem- Effective Approach
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/227/problem/B
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, b;
    unordered_map<ll, ll> pos;

    cin>>n;

    ll a[n], comp1=0, comp2=0; // comp1 for no. of comparision in Vasya's approach and comp2 for Petya's approach

    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        pos[a[i]] = i; // store position of a[i] element, i.e i
    }

    cin>>m;
    while(m--) // m queries
    {
        cin>>b; 
        
        // element to be searched in array 'a'
        // In vasya's approach we move from 1st element to nth element until we encounter 'b'
        // So, no. of comparisons will be => position of element b
        // here I added 1 to pos[b] because I used '0' based indexing 
        comp1 += (pos[b]+1);

        // In Petya's approach we move from nth element to the 1st element until we encounter 'b'
        // So, no. of comparisons will be => total elements - position of element b
        // If we have used '1' based indexing then we have to subtract 1 form the above value
        comp2 += (n-pos[b]);
    }

    cout<<comp1<<" "<<comp2<<endl;

    return 0;
}

/*
 *
 * Problem- Fence
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/363/problem/B
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;

    ll a[n+1], prefix_sum[n+1], tmp, min_sum_height=0, req_index;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin>>a[i];

        //first prepare a prefix sum array so that we can have directly sum of k consecutive elements
        //no need to calculate each time separately 
        if(i==1)
            prefix_sum[i] = a[i];
        else
            prefix_sum[i] = prefix_sum[i-1] + a[i];
    } 

    // assuming minimum sum to be of first k elements   
    min_sum_height = prefix_sum[k];
    req_index = 1;

    // now move from 1st element to (n-k)th and check the sum of height of k consecutive planks, starting from ith plank
    // and update the ans if the present sum is less than initial. 
    for(int i = 1 ; i <= n-k ; ++i)
    {
        // tmp = a[i+1] + a[i+2] + ..... + a[i+k] => sum of k consecutive elements
        tmp = prefix_sum[i+k] - prefix_sum[i];

        if(tmp < min_sum_height )
        {
            min_sum_height = tmp;
            req_index = i+1; // update the req_index to get ans
        }
    }

    cout<<req_index<<endl;

    return 0;
}

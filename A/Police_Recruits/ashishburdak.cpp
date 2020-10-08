/*
 *
 * Problem- Police Recruits
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/427/problem/A
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, police=0, crime=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    for(int i=0;i<n;++i)
    {
        if(a[i]==-1)
        {
            if(police > 0)
                police--;
            else
                crime++;
        }
        else
        {
            police += a[i];
        }
    }
    cout<<crime<<endl;
    return 0;
}
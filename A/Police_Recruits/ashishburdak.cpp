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
        if(a[i]==-1) // crime has occurred
        {
            if(police > 0) // police available to treat crime
                police--; // one police officer can treat only one crime so reducing no. of available police officer
            else
                crime++; // no polie officer available, so this crime goes untreated
        }
        else
        {
            police += a[i]; //add police officers recruited
        }
    }
    cout<<crime<<endl;
    
    return 0;
}

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
   ll int t;
   cin>>t;
   while(t>0){
 
     ll int n,m;
     cin>>n>>m;
     ll int arr[n][m];
 
     for(ll int i=0;i<n;i++){
         for(ll int j=0;j<m;j++){
             cin>>arr[i][j];
         }
     }
 
     ll int ans=0;
 
     for(ll int i=0;i<n;i++){
         for(ll int j=0;j<m;j++){
            //  cout<<"i";
             ll int a=arr[i][j];
             ll int b=arr[i][m-1-j];
             ll int c=arr[n-1-i][j];
             ll int brr[3]={a,b,c};
             sort(brr,brr+3);
            //  cout<<a<<" "<<b<<" "<<c<<endl;
             ans=ans+brr[2]-brr[0];
             arr[i][m-1-j]=brr[1];
             arr[n-1-i][j]=brr[1];
             arr[i][j]=brr[1];
         }
     }
 
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<m;j++){
    //          cout<<arr[i][j]<<" ";
    //      }
    //      cout<<endl;
    //  }
 
     cout<<ans<<endl;
       t--;
   }
}
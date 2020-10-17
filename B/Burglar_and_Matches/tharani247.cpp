#include<bits/stdc++.h>
using namespace std;
//Two arrays are intialized to store the n containers matchboxes that holds m matchboxes exactly
//
long long n,m,arr[20000],brr[200000],q,answer;
int main(){
  //we scan the values of m and n
cin>>m>>n;
  for (int i=1;i<=n;i++)
    //we scan the arr[i] and brr[i] values in two arrays 
    cin>>arr[i]>>brr[i];
  
// we check the two array integers in every line  to be in minimum and maximum order  
  for (int i=1;i<=n;i++){
    for (int j=i+1;j<=n;j++){
            if (brr[j]>brr[i]){
                swap(arr[i],arr[j]);
                swap(brr[i],brr[j]);
            }
        }
  }
  // everytime we find the minimum in the first array integers and we add it every time to find the maximum number of matches
  for(int i=1;i<=n;i++){
        q=min(m,arr[i]);
        ans+=brr[i]*q;
        m-=q;
}
cout<<ans<<endl;
}

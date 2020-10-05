//
// Created by ikjot-2605 on 05/10/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //here arr represents input array of length of the n columns available
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //all we do is sort the input array
    //because the final arrangement will be in ascending order
    //therefore we sort it and then display the output
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main() {
    int a=0, b=0, p=0, n;
    int arr[1000];
    int s=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a>>b;
        p=p-a+b;
        arr[i]=p;
    }
    max=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]> max)
        max=arr[i];
    }
    cout<<max;
}
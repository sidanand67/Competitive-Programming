#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++) scanf("%d",&arr[i]);

    int l = 0; int r = n-1;
    int sereja = 0; int dima = 0; int isSerejaTurn = 1;
    while(l<=r){
        if(isSerejaTurn) sereja+= arr[l]>arr[r]?arr[l++]:arr[r--];
        else dima+= arr[l]>arr[r]?arr[l++]:arr[r--];
        isSerejaTurn = isSerejaTurn==1?0:1;
    }
    // cout<<sereja<<" "<<dima<<endl;
    printf("%d %d",sereja,dima);
}

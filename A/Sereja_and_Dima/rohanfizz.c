#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++) scanf("%d",&arr[i]);

    int l = 0; int r = n-1;                             //using two pointer approach
    int sereja = 0; int dima = 0;                       //sereja and dima's answer so far
    int isSerejaTurn = 1;                               //will keep track of whose turn is it
    while(l<=r){
        if(isSerejaTurn) sereja+= arr[l]>arr[r]?arr[l++]:arr[r--];  // Sereja's turn- sereja will pick the largest of arr[l],arr[r]
        else dima+= arr[l]>arr[r]?arr[l++]:arr[r--];                // Dima's turn- sereja will pick the largest of arr[l],arr[r]
        isSerejaTurn = isSerejaTurn==1?0:1;
    }
    
    printf("%d %d",sereja,dima);
}

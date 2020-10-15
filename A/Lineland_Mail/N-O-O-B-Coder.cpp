#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    vector<long> cood;//Vector to take input of coordinates
    cin>>n;
    for(int i=0;i<n;i++){
        long num;
        cin>>num;
        cood.push_back(num);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<cood[i+1]-cood[i]<<" "<<cood[n-1]-cood[i]<<endl;
        }
        else if(i==n-1){
            cout<<cood[i]-cood[i-1]<<" "<<cood[i]-cood[0]<<endl;
        }
        else if(i>=1 || i<n-1)
        {
            cout<<min((cood[i+1]-cood[i]),(cood[i]-cood[i-1]))<<" "<<max((cood[n-1]-cood[i]),(cood[i]-cood[0]))<<endl;//max and min cost for mail delivery 
        }   
    }
    return 0;
}

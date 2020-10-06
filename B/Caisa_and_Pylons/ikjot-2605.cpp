//
// Created by ikjot-2605 on 05/10/20.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pylons[n];
    int energy = 0;
    int cost = 0;
    for(int i=0;i<n;i++){
        cin>>pylons[i];
    }
    //initially, we must increase height of pylon 0 to height of pylon 1
    //so that no energy is lost
    cost = pylons[0];
    //in this way we go through the heights and add use dollars to maintain energy at minimum, i.e. 0
    for(int i=0;i<n-1;i++){
        energy += pylons[i]-pylons[i+1];
        if (energy<0){
            //use dollars to bring energy back to zero
            cost+=(energy*-1);
            energy=0;
        }
    }
    cout<<cost<<endl;
}
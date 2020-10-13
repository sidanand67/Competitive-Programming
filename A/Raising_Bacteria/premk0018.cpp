#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    long long int n,t,m,r=0;
    cin>>n;
    //a bacteria splits into ao this gives an idea two use bitmasking
    //initially the box is empty
    //we need to return minimum bacteria's that should be added to box so that at some day the box will contain exactly n no. of bacteria's
    t=n;
    //r stores the min. no. of bacteria's that we should add
    while(t>0){ // while the box does not contains exact n no. of bacteria's we performs following statements
        m=1; // for each time we add one bacteria therefore m=1
        r++; // since a bacteria was added so we increment r
        while(m<t){
            m<<=1;  // this loop finally gives us the nearest no. to t (current counter for bacteria's which are still required) which is pow of 2
        }
        //m will either be equal to t if t is a pow of 2 or it will be a pow of 2 greater than t
        if(t!=m){
           m>>=1;  // if m is greater than t we makes it smaller
        }
        t=n-m;
        n=t; 
        // if still some bacteria's left we runs the loop again
    }
    cout<<r<<endl; // finally r will have the min. no.of bacteria added to reach n
    return 0;
}

#include <iostream>
using namespace std;
long long getNumberOfValuesLessThanX(long long X, long long rows,long long columns){
        //decrease X by one to get numbers less than X we search for
        long long lessThanX = X-1;
        long long sum = 0;
        for(int i=1;i<=rows;i++){

            //compare numbers less than X in this row vs the total numbers in the row
            if(columns < lessThanX/i){
                sum+=columns;
            }
            else {
                sum+=lessThanX/i;
            }
        }
        return sum;
}

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long low = 0,high = n*m;
    //we need to search for value Mid that have k values less than it
    while(low<high){
        long long mid = (low+high+1)/2;
        if(getNumberOfValuesLessThanX(mid,n,m)<k){
            //number of values is less than k
            // find bigger X
            low=mid;
        }
        else {
            //number of values is more than k
            //find lower X
            high=mid-1;
        }
    }
    cout<<low<<endl;

    return 0;
}

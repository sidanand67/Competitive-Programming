#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long long>getLuckyNumbers(){
        vector<long long>luckyNumbers;
        luckyNumbers.push_back(4);
        luckyNumbers.push_back(7);
        int index=0;
        while(luckyNumbers[index]<=1000000000){
            long long val = luckyNumbers[index];
            index++;
            luckyNumbers.push_back(val*10+4);
            luckyNumbers.push_back(val*10+7);
        }
    return luckyNumbers;
};
int main()
{
    //generate all the lucky numbers from 1 -> 1e9
    vector<long long>luckyNumbers = getLuckyNumbers();

    int l,r;
    cin>>l>>r;
    long long Answer=0;

    while(l<=r){
        //get the next luckynumber
        int nextLuckyIndex = lower_bound(luckyNumbers.begin(),luckyNumbers.end(),l)-luckyNumbers.begin();
        int range = 0;

        //get how many numbers between the last position and the current lucky number
        if(luckyNumbers[nextLuckyIndex]>r){
					//if the next lucky number is out of range l-r
					//take number to the r only
            range=r-l+1;
        }
        else {
						//the next lucky number is inside rage l-r
						//take all the range
            range=luckyNumbers[nextLuckyIndex]-l+1;
        }
        Answer+= range * luckyNumbers[nextLuckyIndex];
        l+=range;
    }
    cout<<Answer<<endl;

    return 0;
}

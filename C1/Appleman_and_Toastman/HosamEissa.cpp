#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i = 0 ; i < n; i++)
    {
        cin>>numbers[i];
    }
    long long Answer = 0;
    if(n==1){
        //Special case when you have only one number add this number to the answer
        Answer += numbers[0];
        cout<<Answer<<endl;
    }
    else {
        //Sort numbers descending
        sort(numbers.rbegin(),numbers.rend());
        long long numberOfTimesAdded = 2;
        while(numbers.size()>2){
            //Smallest number should be removed now to get bigger numbers with higher number of repetition in the answer
            int Current = numbers.back();
            Answer+=Current*numberOfTimesAdded;
            numbers.pop_back();
            numberOfTimesAdded++;
        }

        //When you have only two numbers you add them with the same the number of repetition
        Answer+=numbers[0] * numberOfTimesAdded + numbers[1]*numberOfTimesAdded;
        cout<<Answer<<endl;
    }

    return 0;
}
//example
// 2*1+3*3+3*5

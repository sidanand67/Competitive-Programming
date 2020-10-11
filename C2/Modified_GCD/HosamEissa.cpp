#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getGcd(int a,int b)
{
    if(b==0)
        return a;
    return getGcd(b, a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int greatestCommonDivisor =getGcd(a,b);
    int n;
    cin>>n;
    vector<int>allPossibleCommonDivisor;

    for(int i = 1 ; i * i<=greatestCommonDivisor; i++)
    {
        // if GCD is divisable by number then it is a common divisor
        if(greatestCommonDivisor%i==0)
        {
            allPossibleCommonDivisor.push_back(i);

            if(i*i==greatestCommonDivisor)
            {
                //the number will be repeated so we continue
                continue;
            }
            else
            {
                allPossibleCommonDivisor.push_back(greatestCommonDivisor/i);
            }
        }
    }
    //Sort all common divisor to be able to do binary search(Upperbound)
    sort(allPossibleCommonDivisor.begin(),allPossibleCommonDivisor.end());

    for(int i=0; i<n; i++)
    {
        int low, high;
        cin>>low>>high;
        //Get Greatest Common divisor in the range
        int commonDivisorIndex=upper_bound(allPossibleCommonDivisor.begin(),allPossibleCommonDivisor.end(),high)-allPossibleCommonDivisor.begin();
        commonDivisorIndex--;

        //check if number exist
        if(commonDivisorIndex>=0)
        {
            int currentCommonDivisor = allPossibleCommonDivisor[commonDivisorIndex];
            //check if number in the range low <= currentCommonDivisor <= high
            if(low<=currentCommonDivisor && currentCommonDivisor<=high)
            {
                cout<<currentCommonDivisor<<endl;
                continue;
            }
        }
        //No answer found in the range
        cout<<-1<<endl;
    }


    return 0;
}

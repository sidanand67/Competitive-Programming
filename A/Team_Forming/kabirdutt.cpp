#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int cases, Arr[1000], k = 0; //intialzing the variable
    while (cin >> cases)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> Arr[i]; //taking input the array
        }
        sort(Arr, Arr + cases);//sorting the array
        for (int i = 0; i < n; i = i + 2)
        {
            k = k + abs(Arr[i + 1] - Arr[i]); //adding the Absolute difference of the array to k
        }
        cout << k << endl;
        k = 0;
    }
}
#include <iostream>
using namespace std;
 
int main()
{
    int n,even = 0, odd = 0;
    cin >> n;
    int index1, index2;
    int numbers[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> numbers[i];
        if(numbers[i] % 2 == 0)
        {
            even++;
            index1 = i;
        }
        else if(numbers[i] % 2 != 0)
        {
            odd++;
            index2 = i;
        }
    }
    if(even == 1) cout << index1+1;
    else cout << index2+1;
}
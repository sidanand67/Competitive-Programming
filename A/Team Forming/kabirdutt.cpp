#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, A[1000], k = 0;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);
        for (int i = 0; i < n; i = i + 2)
        {
            k = k + abs(A[i + 1] - A[i]);
        }
        cout << k << endl;
        k = 0;
    }
}
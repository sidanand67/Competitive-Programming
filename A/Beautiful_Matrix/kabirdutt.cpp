#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5], row = 0, column = 0; //intializing variable
    for (int i = 0; i < 5; i++) //loop for rows
    {
        for (int j = 0; j < 5; j++) //loop for columns
        {
            cin >> a[i][j]; //taking input the matrix
            if (a[i][j] == 1)
            {
                r = i + 1;
                c = j + 1;
                break;
            }
        }
    }
    int count = 0;
    count = abs(r - 3) + abs(c - 3); //adding the absolute difference
    cout << count << endl;
    return 0;

}
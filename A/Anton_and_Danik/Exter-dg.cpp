/*
 *
 * Problem- Anton and Danik
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/734/problem/A
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;

    for (auto i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}

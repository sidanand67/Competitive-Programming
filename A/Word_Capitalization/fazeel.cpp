#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int i = 0, n = str.size();
    while (i < n)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    cout << str;
    
    return 0;
}

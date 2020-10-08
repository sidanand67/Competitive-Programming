#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    // if a number is even (but not 2)
    // then it is valid
    // else it is not
    
    if (n>2 && n%2==0) cout << "YES";
    else cout << "NO" << endl;
}
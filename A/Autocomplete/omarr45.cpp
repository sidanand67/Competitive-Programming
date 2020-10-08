#include <bits/stdc++.h>
  
using namespace std;
 
int main() { 
    string s;
    string ans = "-1";
    int n;

    // Get the input
    cin >> s >> n;
    
    while(n--) {

        // Now get the n strings 
        string query;
        cin >> query;

        // if it was found
        if(query.find(s) != string::npos) {
            // if it our (s) is a prefix
            // and if it is less than the previous ans
            if(query.find(s) == 0 && (ans == "-1" || query < ans ))
                ans = query;
        }
    }

    if(ans == "-1")
        ans = s;
    cout << ans << endl;
 
    return 0;
}
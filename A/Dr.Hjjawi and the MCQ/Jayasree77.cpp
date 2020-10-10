//Problem 102397I Dr.Hjjawi and the MCQ
//<a href="https://codeforces.com/gym/102397/problem/I">

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v={0,0,0,0,0};
    for(int i=0;i<s.size();i++){
        switch(s[i]){
            case 'a':v.at(0)++;continue;
            case 'b':v.at(1)++;continue;
            case 'c':v.at(2)++;continue;
            case 'd':v.at(3)++;continue;
            case 'e':v.at(4)++;continue;
        }
    }
    cout<<*min_element(v.begin(), v.end())<<" "<<*max_element(v.begin(), v.end());
    return 0;
}
/*  Coded by pranjanpr  */
/* Problem Link: https://codeforces.com/contest/791/problem/A */
#include<iostream>

using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    int year=0;
    
    while(a<=b){           //run the loop if size of bear A is less than size of bear B
        a=a*3;             // updating size of both bears and year
        b=b*2;
        year++;
        if(a>b) {          // if bear A is greater than B print the year and stop the program
            cout<<year<<endl;
            return 0;
        }
    }
    return 0;
}
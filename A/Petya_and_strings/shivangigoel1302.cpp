/*
  Problem:Petya and Strings
  Problem link:https://codeforces.com/contest/112/problem/A
  language : C++
*/

#include <iostream>
using namespace std;
int compare(string s1,string s2){
   for(int i = 0 ; i < s1.size(); i++){
        //check whether ith char of string 1 is greater than string 2
        //ascii difference must be equal to 32 for uppercase and lowercase characters
        //difference must not be 32 for the case sensitivity to not matter
       if(s1[i] > s2[i] && abs(s1[i] - s2[i]) != 32){
                return 1;
       }
        //check if string 2 is greater than string 1
        if(s2[i] > s1[i] && abs(s1[i] - s2[i]) != 32){
                return -1;
       }
   }
   //Exiting the loops indicates the strings are equal
   return 0;
}
int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<compare(s1,s2);
}

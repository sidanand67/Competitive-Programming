/*
 *
 * Problem- Anton and currency you all know
 * Platform- Codeforces
 * Problem Link- http://codeforces.com/contest/508/problem/B
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    
    int even_present=0, len = n.length();

    //first check if the given number contains an even digit or not
    // if no, then answer is simply -1
    for(int i = 0 ; i < len ; ++i)
    {
        if( (n[i]-'0')%2 == 0)
        {
            even_present=1;
            break;
        }
    }
    if(even_present == 0)
        cout<<-1<<endl;
    else
    {
        int found = 0;

        //Now as we have to maximise the number, so we move from 1st digit to last in the given number
        // and whenever we encounter an even digit less than the last digit, Swap it and we have the answer
        for(int i = 0 ; i < len ; ++i)
        {
            if((n[i]-'0')%2 == 0 && n[i] < n[len-1])
            {
                swap(n[i], n[len-1]);
                found = 1;
                break;
            }
        }
        if(found)
            cout<<n<<endl;
        else
        {
            //Now we will move from last digit to first in the given number
            // and whenever we encounter an even digit greater than the last digit, Swap it and we have the answer
            for(int i = len-1 ; i>=0 ;--i)
            {
                if((n[i]-'0')%2 == 0 && n[i]>n[len-1])
                {
                    swap(n[i], n[len-1]);
                    break;
                }
            }
            cout<<n<<endl;
        }   
    }

    return 0;
}

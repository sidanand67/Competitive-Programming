/*
  Problem:Magnets
  Problem link:https://codeforces.com/contest/344/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int number_of_magnets;
    int magnet_groups;
    cin >> number_of_magnets;   //  take input

    string cur_magnet, prev_magnet;     //  store magnet types

    for(int i=0; i<number_of_magnets; i++)
    {
        cin >> cur_magnet;      //  take input

        if(i == 0)      //    for 1st magnet group is initialised to 1 and previous magnet to current magnet
        {
            magnet_groups = 1;  
            prev_magnet = cur_magnet;
            continue;
        }
        if(prev_magnet[1] == cur_magnet[0])     //  current placed magnet repels the previous magnet
            magnet_groups += 1;                 //  then groups will increase
        
        prev_magnet = cur_magnet;   //  update previous magnet with current magnet
    }

    cout << magnet_groups;

    return 0;
}
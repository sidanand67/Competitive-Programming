#include <iostream>

using namespace std;

int main(){
    int number_of_cards;
    cin>>number_of_cards;

    //create an array of size number_of_size to store the value of cards
    int value[number_of_cards]; 
    for(int i=0; i<number_of_cards; ++i){
        cin>>value[i];
    }

    int scoreSereja=0;
    int scoreDima=0;

    /* algorithm description:
       We will use two pointer technique, greedy, one pointer will be at the end of the 
       array and the other at the start. On every move we will take the values from the 
       end or start greedily.
       more info about two pointer can be found at https://www.geeksforgeeks.org/two-pointers-technique/
    */

   int start =0;
   int end = number_of_cards-1;

    bool chance =1; //if chance == 1 then its sereja's chance to pick

   while(start <= end){
       if(chance){
           if(value[start]>value[end]){
               scoreSereja+=value[start];
               start++;
           }
           else{
               scoreSereja+=value[end];
               end--;
           }
       }
       else{
           if(value[start]>value[end]){
               scoreDima+=value[start];
               start++;
           }
           else{
               scoreDima+=value[end];
               end--;
           }
       }

       //updating the chance 
       if(chance==1){
           chance =0;
       }
       else{
           chance = 1;
       }

       //shortcut: chance = !(chance)
   }
   cout<<scoreSereja<<" "<<scoreDima;
}
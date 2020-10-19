#include<bits/stdc++.h>

using namespace std;

int main() {
	int number_of_cards;
	cin >> number_of_cards;

	//number on each card is stored in array "cards" and the scores of Sereja and Dima are stored in 0,1 indices of "scores" array
	int cards[number_of_cards], scores[2]={0,0};
	for(int i=0; i<number_of_cards; ++i) {
		cin >> cards[i];
	}

	//left and right variables are two pointers that keep track of the cards in play 
	int left=0,right=number_of_cards-1;

	for(int i=0; i<number_of_cards; ++i) {
		//out of the two cards, the card with higher value is chosen and then the next card comes into play
		if(cards[left] > cards[right]) {
			scores[i%2]+=cards[left];
			left++;
		}
		else {
			scores[i%2]+=cards[right];
			right--;
		}
	}

	cout << scores[0] << " " << scores[1];
	return 0;
}
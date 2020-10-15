#include<bits/stdc++.h>

using namespace std;

int main() {
	//"n" stores number of games played and array "score" stores the games won by Anton and Danik on respective indices 0 and 1
	int n,score[2]={0,0};
	cin >> n;

	//string "result" stores the outcomes of the n games played
	string result;
	cin >> result;

	for(int i=0;i<n;i++) {
		//we increment the indices of score array assigned to Anton and Danik in accordance to the results
		if(result[i]=='A') {
			score[0]++;
		}
		else {
			score[1]++;
		}
	}

	//Printing the name of the winner or printing "Friendship" in case of level scores.
	if(score[0]>score[1]) {
		cout << "Anton";
	}
	else if(score[1]>score[0]) {
		cout << "Danik";
	}
	else {
		cout << "Friendship";
	}

	return 0;
}
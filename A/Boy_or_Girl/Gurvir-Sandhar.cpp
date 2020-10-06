#include <iostream>
#include <string>

using namespace std;

int main(){

	//get user input	
	string input;
	cin >> input;

	string charList[256];
	int numDistinct;
		
	for(int i = 0; i < input.length(); i++){ 
		if(charList[input[i]] != "true"){
			charList[input[i]] = "true";
			numDistinct++;			
		}		
	}

	if(numDistinct % 2 == 1) {
		cout << "IGNORE HIM!" << endl;
	}
	else
		cout << "CHAT WITH HER!" << endl;



}

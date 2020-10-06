#include <iostream>
#include <string>

using namespace std;

int main(){

	//get user input	
	string input;
	cin >> input;
	
	//array which each index represents an ascii char
	string charList[256];
	
	//keeps track of number of distinct chars in the input string
	int numDistinct;
		
	//for each char in the input string, check if it is in charList
	//if not, then add it and increment numDistinct
	for(int i = 0; i < input.length(); i++){ 
		if(charList[input[i]] != "true"){
			charList[input[i]] = "true";
			numDistinct++;			
		}		
	}

	//check if numDistinct is odd
	if(numDistinct % 2 == 1) {
		cout << "IGNORE HIM!" << endl;
	}
	else
		cout << "CHAT WITH HER!" << endl;



}

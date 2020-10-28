#include<bits/stdc++.h>

using namespace std;

int main() {
	//We store the total width road required in "total_width" and variable "height" stores height of friends
	int number_of_friends, fence_height, height, total_width=0;
	cin >> number_of_friends >> fence_height;
	
	//Measuring width of road required for each friend
	for(int i=0;i<number_of_friends;++i) {
		cin >> height;
		//Now if a friend has height more than that of the fence, we'll add 2 to the total width else 1 will be added
		if(height > fence_height) {
			total_width+=2;
		}
		else {
			total_width+=1;
		}
	}

	cout << width;
	return 0;
}
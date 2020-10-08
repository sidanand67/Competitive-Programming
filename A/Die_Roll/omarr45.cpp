#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
	int Y, W;
    cin >> Y >> W;

    // store the answers in an array
	string answer[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};

    // Print the answer
	cout << answer[6-max(Y,W)];

	return 0 ;
}

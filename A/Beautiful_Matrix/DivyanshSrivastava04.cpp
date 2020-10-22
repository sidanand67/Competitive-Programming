#include<bits/stdc++.h>
using namespace std;

int main() {
	//x and y store the row and column indices of the 1 present in the matrix
	int matrix[5][5];
	int x, y;

	for(int i=0;i<5;++i) {
		for(int j=0;j<5;++j) {
			cin >> matrix[i][j];
			//Since there is only one 1 in the matrix, we store its x and y indices
			if(matrix[i][j]==1) {
				x=i;
				y=j;
			}
		}
	}

	//Minimum moves to make the matrix beautiful is minimum distance of 1 from the centre of the matrix
	int distance = abs(x-2)+abs(y-2);

	cout << distance;

	return 0;
}
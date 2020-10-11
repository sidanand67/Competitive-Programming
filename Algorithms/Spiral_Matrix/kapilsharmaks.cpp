#include<bits/stdc++.h>
typedef long double LD;
typedef long long LL;
 
using namespace std;
 
#define sz(A) (int)(A).size()
#define mp make_pair
#define pb push_back

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int> result;
	if(matrix.size() == 0 || matrix[0].size()== 0)
		return result;

	int lastRow = matrix.size()-1;
	int lastCol = matrix[0].size()-1;
	int firstRow = 0;
	int firstCol = 0;

	while(firstRow<=lastRow && firstCol<=lastCol) {
		//Print first row
		for (int i = firstCol; i <= lastCol; i++) {
			result.push_back(matrix[firstRow][i]);
		}
		firstRow++;

		//Print last column
		for (int i = firstRow; i <= lastRow; i++) {
			result.push_back(matrix[i][lastCol]);
		}
		lastCol--;

		//Print last row & first column
		if(lastRow>=firstRow && lastCol>=firstCol) {
			for (int i = lastCol; i >= firstCol; i--) {
				result.push_back(matrix[lastRow][i]);
			}
			lastRow--;

			for (int i = lastRow; i >= firstRow ; i--) {
				result.push_back(matrix[i][firstCol]);
			}
			firstCol++;
		}
	}
	return result;
}

int main() {

	ios_base::sync_with_stdio(false);cin.tie(NULL);	cout.tie(NULL);

	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int row,col;
    cin>>row>>col;
    vector<vector<int>> matrix(row,vector<int>(col));

    for(int i=0; i<row; i++){
    	for(int j=0; j<col; j++){
    		cin>>matrix[i][j];
    	}
    }
    vector<int> ans = spiralOrder(matrix);
    for (int i = 0; i < ans.size(); ++i)
    {
    	cout<<ans[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define N  100005


/*
Algorithm: Family hirarichy will form a forest where there will be a lot of number of disconnected directed acyclic trees. 
We first make a topological sort of that forest so that we dfs that forest from to to bottom. The main idea is if u wants 
to donate v then in the chain from u to v including u, everyone should gift it to u or else it would not be possible. So 
for eacg node we find to whom its child want to gift and if they gifted to themselves then it would be -1. After calculating 
it for each child we check either it should be -1 or it should be the same as that own nodes wish. If not then it isn't 
possible and if that value is equal to that node then we push that in our output list. This way we dfs the whole forest  in
topological order. 

link to Codeforces Submission: https://codeforces.com/contest/681/submission/94924984

*/


vector<int> listOfCandidates;
vector<int> childs[N];
vector<bool> visited(N);
stack<int> topoSortOrder;
int orderPossible;
vector<int> giftReciever(N);
	
void topoSort(int node) {
	visited[node] = 1;
	for(auto i : childs[node]) {
		if(!visited[i]) {
			topoSort(i);
		}
	}
	topoSortOrder.push(node);
}

int dfs(int node) {
	visited[node] = 1;
	int wish = giftReciever[node], childsWish;
	for(auto i : childs[node]) {
		
		if(!visited[i]) { 
			childsWish = dfs(i);
			if(!orderPossible) {
				return -1;
			}
			if(childsWish != -1 && wish != childsWish) {
				orderPossible = false;
				return -1;
			}
		}
	}
	if(wish == node) {
		listOfCandidates.push_back(node);
		return -1;
	}
	return wish;
}

int main()
{
	int n,m;
	cin >> n >> m;
	orderPossible = true;
	// n = number of men in Shasha's family
	// m = number of family relations
	int p,q;
	for(int i = 0; i < m; i++) {
		cin >> p >> q;
		childs[p].push_back(q);
	}

	for(int i = 1; i <= n; i++) {
		cin >> giftReciever[i];
	}

	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			topoSort(i);
		}
	}

	for(int i = 1; i<=n; i++) {
		visited[i] = 0;
	}

	while(!topoSortOrder.empty()) {
		int node = topoSortOrder.top();
		topoSortOrder.pop();
		if(!visited[node]) {
			dfs(node);
			if(!orderPossible) {
				break;
			}
		}
	}

	if(!orderPossible) {
		cout << -1 << endl;
		return 0;
	}

	cout << listOfCandidates.size() << endl; 
	for(auto i : listOfCandidates) {
		cout << i << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

const int nax = 1e5 + 5;
vector<int> AdjL[nax];
int vis[nax];

int color[nax], ans, m, n;
// color[i] is 1 if there is a cat in node i else its 0
 
void dfs(int u, int max_count, int cur_count) {
    // u         - current node in dfs
    // max_count - the maximum continous detected count so far  
    // cur_count - the count of maximum continous segment is current not u as the deepest node
    
    // mark u as visited 
    vis[u] = 1;
    
    for(auto v : AdjL[u]) {
	if (vis[v] == 0) {
	    // if not visited 
	    if (color[v] && color[u]) {
		// both have cats then 
		// consider 1 + cur_count as a max_count candidate 
		// increase cur_count by one
		dfs(v, max(max_count, 1 + cur_count), 1 + cur_count);
	    }else if(color[v] && !color[u]) {
		// node v has cats and starts a new continous range
		// consider 1 as a max_count candidate 
		// cur_count is 1
		dfs(v, max(max_count, 1), 1);
	    }else {
		// if both don't have cats no changes to max_count 
		// and current count is zero
		dfs(v, max_count, 0);
	    }
	}
    }
    if (int(AdjL[u].size()) == 1 && u != 0) {
	// if u is a leaf node and as max_count less then m - increment ans
	if (max_count <= m) ++ans;
    }
}
 
int main() {
    
    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
	// take color as input
	cin >> color[i];
    }
    int a, b;
    for (int i = 0; i < n - 1; ++i) {
	cin >> a >> b;
	--a, --b;
	AdjL[a].push_back(b);
	AdjL[b].push_back(a);
    }
    // calculate answer
    dfs(0, color[0], color[0]);
    
    cout << ans << '\n';
    
    return 0; 
}

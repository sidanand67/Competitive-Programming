#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define gl(x)    getline(cin, x)
#define ci       cin.ignore();
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
typedef pair<int, int>       pii;
typedef vector<int>          vi;
typedef vector<vector<int>>  vii;
const int MOD = 1'000'000'007;

void solve(){
    vi arr(4);
    int i, c = 0;
    unordered_set<int> h;
    fo(i,4){
        cin>> arr[i];
        if (h.find(arr[i]) == h.end()) {
            c++;
            h.insert(arr[i]);
        }
    }
    int ans = 4-c;
    cout<< ans;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int main() {

	int t;
	cin >> t;
	while (t--) {
		ll p, f, cnts, cntw, s, w;
		cin >> p >> f >> cnts >> cntw >> s >> w;
		if (s > w) {
			swap(cnts, cntw);
			swap(s, w);
		}
		ll ans = 0;
		for (int i = 0; i <= cnts; ++i) {
			ll cpycnts = cnts, cpycntw = cntw, cpyp = p, cpyf = f;
			ll curr_ans = 0;
			if (i * s <= cpyp) {
				curr_ans += i;
				cpyp -= i * s;
				cpycnts -= i;
			}
			curr_ans += min(cpyp / w, cpycntw);
			cpycntw -= min(cpyp / w, cpycntw);
			curr_ans += min(cpyf / s, cpycnts);
			cpyf -= min(cpyf / s, cpycnts) * s;
			curr_ans += min(cpyf / w, cpycntw);
			cpyf -= min(cpyf / w, cpycntw);
			ans = max(curr_ans, ans);
		}
		cout << ans << endl;
	}

	return 0;
}
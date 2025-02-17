#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, q, k;
	cin >> n >> k >> q;
	vector<int> arr(1000001, 0);
	vector<int> pre(1000001, 0);
	int maxR = INT_MIN;
	for (int i = 0; i < n; i++) {
		int  l, r;
		cin >> l >> r;
		maxR = max(maxR, r);
		arr[l] += 1;
		arr[r + 1] -= 1;
	}
	//prefix sum
	for (int i = 1; i <= maxR; i++) {
		pre[i] = pre[i - 1] + arr[i];
	}
	vector<int> final(1000001, 0);
	for (int i = 1; i <= maxR; i++) {
		if (pre[i] >= k) {
			final[i] = 1;
		}
		else {
			final[i] = 0;
		}
	}
	vector<int> prefinal(1000001, 0);
	for (int i = 1; i <= maxR; i++) {
		prefinal[i] += prefinal[i - 1] + final[i];
	}

	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		cout << prefinal[r] - prefinal[l - 1] << endl;
	}
}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);
	int t;
	t = 1;
// cin>>t;

	while (t--) {
		solve();
	}
	return 0;
}
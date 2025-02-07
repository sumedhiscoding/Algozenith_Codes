#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; int q;
	cin >> n >> q;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;


	int pre[n + 1];
	pre[0] = arr[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	cout << endl;
	while (q--) {
		int m;
		cin >> m;
		auto it = upper_bound(arr, arr + n, m);
	}


}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);
	solve();
	return 0;
}
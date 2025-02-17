#include<bits/stdc++.h>
using namespace std;

int arr[100100];
int brr[100100];
int n;
void findsolve(int ans, int query, int arr[]) {
	//we have 2 arrays
	if (ans == n - 1) {
		auto ans1 = lower_bound(arr, arr + ans, query) - arr;
		cout << ans1 << endl;

		return ;
	}
	else {
		auto ans1 = lower_bound(arr, arr + ans, query)-arr;
		if( arr[ans1]==query){
			cout<<ans1<<endl;
			return;
		}
		if (arr[ans1] != query) {
			//we need to find it in the other half
			int lo = ans; int hi = n - 1;z
			while (lo <= hi) {
				int mid = (lo + hi) / 2;
				if (arr[mid] == query) {
					cout << mid << endl;
					return;
				}
				else if (arr[mid] > query) {
					lo = mid + 1;
				}
				else {
					hi = mid - 1;
				}
			}
		}

	}
}
int check(int mid) {
	if (mid == n - 1) {
		return 1;
	}
	if (arr[mid] > arr[mid + 1]) {
		return 1 ;
	} else {
		return 0;
	}
}
void solve() {
	int q; cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < q; i++) {
		cin >> brr[i];
	}
	int lo = 0;
	int hi = n - 1;
	int ans = -1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (check(mid) == 1) {
			ans = mid;
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
	// we have the to find the peak element
	//we have 2 arrays
	for (int i = 0; i < q; i++) {
		findsolve(ans, brr[i], arr);
	}

}
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);
	int t;
//t=1;
	cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
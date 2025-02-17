#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, p;
	cin >> n >> m >> p;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int brr[m][p];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			cin >> brr[i][j];
		}
	}
	int crr[n][p];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			int sumtemp = 0;
			for (int k = 0; k < m; k++) {
				sumtemp += arr[i][k] * brr[k][j];
			}
			crr[i][j]=sumtemp;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			cout<<crr[i][j]<<" ";
		}
		cout<<endl;
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
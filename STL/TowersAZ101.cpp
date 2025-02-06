#include<bits/stdc++.h>
using namespace std;
const int N = 100006;
void solve() {
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<int> towers;
	towers.push_back(arr[0]);
	int size = 1;
	int j=0;
	for (int i = 1; i < n; i++) {
		if (arr[i] >= towers[j]) {
			towers.push_back(arr[i]);
			j++;
		}
	}
	cout<<j<<endl;


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
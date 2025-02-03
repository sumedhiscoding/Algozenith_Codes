#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long fact[100000];

void solve() {
	long long n;
	cin >> n;
	long long ans = (n * (n - 1) ) / 2 - n;
	cout << ( ans % mod) << "\n";
}
int main() {
	ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
	long long  t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;

}
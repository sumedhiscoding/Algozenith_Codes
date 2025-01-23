#include<iostream>
using namespace std;
void check(int n, int q) {
	if (q == 1) {
		int ans = 0;
		for (int i = 1; i * i <= n; i++) {
			if (i * i == n) {
				ans = 1;
				break;
			}
		}
		if (ans) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else {
		int ans = 0;
		for (int i = 1; i * i * i <= n; i++)
		{
			if (i * i * i == n) {
				ans = 1;
				break;
			}
		}
		if (ans) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}



}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int q;
		int n;
		cin >> q >> n;
		if (q == 1) {
			check(n, 1);
		}
		else {
			check(n, 2);
		}
	}


	return 0;
}
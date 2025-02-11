#include <bits/stdc++.h>
using namespace std;

struct DS {
	multiset<int> arr;
	long long sum = 0;

	void append(int x) {
		this->arr.insert(x);
		sum += x;
	}

	void remove(int x) {
		auto it = arr.find(x);
		if (it != arr.end()) {
			this->arr.erase(it);
			sum -= *it;
		}
	}

	int getMax() {
		return arr.empty() ? -1 : *(arr.rbegin());  // Using rbegin() instead of --end()
	}

	int getMin() {
		return arr.empty() ? -1 : *(arr.begin());
	}

	long long getSum() {  // Changed return type to long long
		return sum;
	}
};

void solve() {

}

int main() {  // Changed from signed main() to int main()
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	DS mul;
	while (t--) {
		int q;
		cin >> q;
		if (q == 1) {
			int x;
			cin >> x;
			mul.append(x);
		} else if (q == 2) {
			int x;
			cin >> x;
			mul.remove(x);
		} else if (q == 3) {
			char x;
			cin >> x;
			cout << mul.getMin() << endl;
		} else if (q == 4) {
			char x;
			cin >> x;
			cout << mul.getMax() << endl;
		} else if (q == 5) {
			char x;
			cin >> x;
			cout << mul.getSum() << endl;
		}
	}
	return 0;
}

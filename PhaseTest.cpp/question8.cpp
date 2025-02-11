#include<bits/stdc++.h>
using namespace std;
struct Order {
	int a1, n1;
	Order(int _a1, int _n1) {
		this->a1 = _a1;
		this->n1 = _n1;
	};
	void print() {
		cout << a1 << " " << n1 << endl;
	}
};
void solve(string s) {
	stack<int> st;
	map<int, int> mp;
	int maxSize = INT_MIN;
	vector<int> powers;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == 'f') {
			st.push(1);
			i += 3;
		}
		else if (s[i] == 'e') {
			if (!st.empty()) {
				st.pop();
			} else {
				cout << "Compile Error" << endl;
				break;
			}
			i += 6;
		}
		int size = st.size();
		maxSize = max(maxSize, size);
		int top = !st.empty()  ?  st.top() : -1;
		// cout << " maxSize " <<  maxSize << " " << size << " " << top << endl;
		if (st.size() == 0) {
			powers.push_back(maxSize);
			maxSize = 0;
		}
	}
	vector<int> power;
	for (auto x : powers) {
		if(mp[x]==0){
			power.push_back(x);
		}	
		mp[x]++;
	}
	// for (auto x : mp) {
	// 	cout << x.first << " " << x.second << endl;
	// }
	string ans = "";
	for (auto x : power) {
		if (mp[x] == 1) {
			if (x == 1) {
				ans += 'n + ';
			}
			else {
				string temp = "n^" + to_string(x) + " + ";
				ans += temp;
			}
		}
		else {
			if (x == 1) {
				string temp = to_string(mp[x]) + "n + ";
				ans += temp;
			} else {
				string temp = to_string(mp[x]) + "n^" + to_string(x) + " + ";
				ans += temp;
			}
		}
	}

	if (!ans.empty()) {
		ans.pop_back();  // Remove last character
		ans.pop_back();  // Remove last character
	}

	cout << ans << endl;


}

int main() {
	int t;
	cin >> t;
	string temp;
	getline(cin, temp);
	while (t--) {
		string s;
		getline(cin, s);
		solve(s);
	}

	return 0;
}
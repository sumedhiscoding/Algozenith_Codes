#include <bits/stdc++.h>
using namespace std;

bool isValid(const string &temp) {
    if (temp.empty() || !islower(temp[0])) {
        return false;
    }

    size_t it = temp.find('/');
    size_t it2 = temp.find('\\');

    if (it == string::npos || it2 == string::npos || it2 <= it + 1) {
        return false; // Both slashes must be present and in the correct order
    }

    // Check first segment (before '/')
    for (size_t i = 1; i < it; i++) {
        if (!islower(temp[i]) && !isdigit(temp[i]) && temp[i] != ':') {
            return false;
        }
    }

    // Check second segment (between '/' and '\')
    for (size_t i = it + 1; i < it2; i++) {
        if (!islower(temp[i]) && !isdigit(temp[i])) {
            return false;
        }
    }

    // Check third segment (after '\')
    if (temp.length() - 1 - it2 <= 0) {
        return false;
    }
    
    for (size_t i = it2 + 1; i < temp.length(); i++) {
        if (!islower(temp[i])) {
            return false;
        }
    }

    return true;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;

    // Generate all substrings
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {  // Ensure valid substring length
            string temp = s.substr(i, len);
            if (isValid(temp)) {
                count++;
            }
        }
    }
    
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

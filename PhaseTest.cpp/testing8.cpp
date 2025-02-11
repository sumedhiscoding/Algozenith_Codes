#include <bits/stdc++.h>
using namespace std;
void solve(string s) {
    stack<int> st;
    map<int, int> mp;
    int maxSize = 0;  // Corrected initialization
    vector<int> powers;
    int i = 0;

    while (i < s.length()) {
        if (s.substr(i, 3) == "for") {  // Properly check for "for"
            st.push(1);
            i += 3;
        } 
        else if (s.substr(i, 6) == "endfor") {  // Properly check for "endfor"
            if (!st.empty()) {
                st.pop();
            } else {
                cout << "Compile Error" << endl;
                return;
            }
            i += 6;
        } 
        else {
            i++;  // Move forward in case of unknown characters
        }

        int size = st.size();
        maxSize = max(maxSize, size);
        
        if (st.empty() && maxSize > 0) {
            powers.push_back(maxSize);
            maxSize = 0;  // Reset only after storing
        }
    }

    if (!st.empty()) {
        cout << "Compile Error" << endl;
        return;
    }

    set<int,greater<int> > power;
    for (auto x : powers) {
        if (mp[x] == 0) {
            power.insert(x);
        }
        mp[x]++;
    }

    string ans = "";
    for (auto x : power) {
        if (mp[x] == 1) {
            ans += (x == 1) ? "n + " : "n^" + to_string(x) + " + ";
        } else {
            ans += (x == 1) ? to_string(mp[x]) + "n + " : to_string(mp[x]) + "n^" + to_string(x) + " + ";
        }
    }

    if (!ans.empty()) {
        ans = ans.substr(0, ans.length() - 3);  // Remove the last " + "
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Consume leftover newline character

    while (t--) {
        string s;
        getline(cin, s);
        solve(s);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int m, f, r;
        cin >> m >> f >> r;
        char grade;
        if(m == -1 || f == -1)
            grade = 'F';
        else if(m + f >= 80)
            grade = 'A';
        else if(m + f >= 65)
            grade = 'B';
        else if(m + f >= 50)
            grade = 'C';
        else if(m + f >= 30) {
            grade = 'D';
            if(r >= 50)
                grade = 'C';
        }
        else
            grade = 'F';
        cout << grade << "\n";
    }
    return 0;
}

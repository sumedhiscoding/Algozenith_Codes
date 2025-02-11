#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0) {
            // non quadratic
            if (b == 0) {
                if (c != 0) {
                    cout << 0 << endl;
                }
                else {
                    cout << INT_MAX << endl;
                }
            }
        }
        else if (b == 0) {
            int D = b * b - 4 * a * c;
            if (c == 0) {
                cout << 2 << endl;
            }
            else if (D > 0) {
                cout << 2 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else if (c == 0) {
            cout << 2 << endl;
        }
        else {

            int D = b * b - 4 * a * c;
            if (D > 0) {
                cout << 2 << endl;
            }
            else if (D == 0) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
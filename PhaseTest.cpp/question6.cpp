#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> arr(n);
    vector<int> pre(n + 1, 0);  // ✅ Use n+1 for easier indexing

    // ✅ Compute prefix sum while taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pre[i + 1] = pre[i] + arr[i];  // ✅ Use 1-based indexing for `pre`
    }
    
    int q;
    cin >> q;
    while (q--) {
    int l, r, k;
    cin >> l >> r >> k; // ✅ Convert to 0-based indexing
    l--;r--;
    int sum = 0;
    if (k==0 || k > (r - l + 1)) {sum=0;}; // ✅ Handle invalid window size case
    for (int i = l; i <= r - k + 1; i++) {
        sum += pre[i + k] - pre[i]; // ✅ Corrected indexing (prefix sum 1-based style)
    }
    cout<< sum<<endl;
    }

    return 0;
}
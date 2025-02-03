#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int mod = 1e9 + 7;
const int N = 200010;
int fact[N];

int power(int base, int exponent, int modulus) {
    int result = 1;
    base %= modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent /= 2;
        base = (base * base) % modulus;
    }
    return result;
}

int inv(int a) {
    return power(a, mod - 2, mod);
}

int mul(int a, int b) {
    return (1LL * a * b) % mod; // this is wehre u were getting it wrong
}

void pre() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = mul(fact[i - 1], i);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    int ans = fact[n + m];
    // cout<<"ans is "<<ans<<endl;
    ans=mul(ans,inv(fact[m]));
    // cout<<"ans is "<<ans<<endl;
    ans=mul(ans,inv(fact[n]));
    // cout<<"ans is "<<ans <<endl;
    cout<<ans<<endl;
}

signed main() {
    int t;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
    return 0;
}

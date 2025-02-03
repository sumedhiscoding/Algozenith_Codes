#include <bits/stdc++.h>
#define lli long long
using namespace std;

const int mod = 1e9 + 7;

// Function to compute a^b % mod using binary exponentiation
lli binpow(lli a, lli b) {
    if(b==0) return 1;
	if(b%2) return a*binpow(a,b-1) % mod;
	else{
		lli ans=binpow(a,b/2);
		return ans* ans % mod;
	}
}


// Function to calculate nCr % mod for large n
lli ncr(lli n, lli r) {
    if (r > n) return 0;

    lli numerator = 1;
    for (lli i = 0; i < r; i++) {
        numerator = (numerator * (n - i)) % mod;
    }

    lli denominator = 1;
    for (lli i = 1; i <= r; i++) {
        denominator = (denominator * i) % mod;
    }

    // Modular inverse of the denominator
    lli denominator_inv = binpow(denominator, mod - 2);

    return (numerator * denominator_inv) % mod;
}

void solve() {
    lli n;
    cin >> n;
    lli NCR2 = ncr(n, 2);
    lli NCR4 = ncr(n, 4);
    cout << "NCR2: " << NCR2 << ", NCR4: " << NCR4 << endl;

    // Example expression
    cout << (1 + NCR2 - n + NCR4 + mod) % mod << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
const int mod = 1e9 + 7;

int inv(int a, int b = mod - 2) {
  int ans = 1;
  while (b) {
    if (b & 1) ans = (ans * a) % mod;
    a = (a * a) % mod;
    b /= 2;
  }
  return ans;
}

int inv2 = inv(2);
int inv24 = inv(24);

void solve() {
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 0; i < 4; i++) ans = (ans * (n - i)) % mod;
  cout<<"ans is "<< ans << " "  << inv2 << " " <<inv24<<endl;
  ans = (ans * inv24) % mod;



  int temp = (n * (n - 1)) % mod;
  ans = (ans + 1 + (temp * inv2) % mod);
  ans -= n;
  cout << (ans % mod + mod) % mod << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}

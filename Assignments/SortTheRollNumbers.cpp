#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ld long double
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const lli MOD = 1e9 + 7;
const lli INF = 1e9;
const ld EPS = 1e-9;

//---- Debugger ---- //
#define debarr(a,n) cout<<#a<<" : ";for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n";for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
lli binpow(lli b,lli p,lli mod){lli ans=1;b%=mod;for(;p;p>>=1){if(p&1)ans=ans*b%mod;b=b*b%mod;}return ans;}
//----------------- //
bool comp(const pair<string,int> &a,const pair<string,int> &b){
	return a.second < b.second;
 }
void solve(){
  	int n;
  	cin>>n;
  	// string temp;
  	// getline(cin,temp);
  	vector<pair<string,int> > arr(n,{"",0});
  	for (int i = 0; i < n; ++i)
  	{
  		string s;
  		cin>>s;
  		int t;
  		cin>>t;
  		arr[i].first=s;
  		arr[i].second=t;
  	}
  	// for(auto x:arr){
  	// 	cout<<x.first<<" "<<x.second<<endl;
  	// }
  	sort(all(arr),comp);
  	for(int i=0;i<n;i++){
  		cout<<arr[i].first<< " "<< arr[i].second<<endl;
  	}

}
signed main(){
  fastio();
  int t;
  // t=1;  
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
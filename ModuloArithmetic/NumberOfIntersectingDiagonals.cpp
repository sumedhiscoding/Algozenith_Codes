#include<iostream>
using namespace std;
const long long mod =1e9+7;
long long binpow(long long a,long long b){
	if(b==0) return 1;
	if(b%2){ 
			return a*binpow(a,b-1) % mod ;
		 }
	else {
		long long ans= binpow(a,b/2);
		return (ans* ans) % mod;
	}
}

long long mul(long long a,long long b){
	return (a*b) % mod ;
}


void solve(long long n){
	//nC4
	long long ans=n;
	ans=mul(ans,n-1);
	ans=mul(ans,n-2);
	ans=mul(ans,n-3);
	long long result = (ans % mod * binpow(24, mod-2) % mod) % mod ; 
	cout<<result<<endl;
	// cout<<result<<endl;
}



signed main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}

	return 0;

}
#include<iostream>
using namespace std;
#define int long long 
void solve() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			sum+=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
	}
	cout<<sum<<endl;

}
signed main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}



	return 0;
}
#include<iostream>
using namespace std;
int arr[100100];
int check(int mid){
	if(arr[mid] < arr[0]){
		return 1;
	}
	else {
		return 0;
	}
	return 1;
}
void solve()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int lo=0;
	int hi=n-1;
	int ans=-1;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(check(mid)==1){
			ans=mid;
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}
	}
	if(ans==-1)
	{
		cout<<0<<endl;
	}else
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}


	return 0;
}
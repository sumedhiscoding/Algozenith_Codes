#include<iostream>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]<=10){
			cout<<"A["<<i<<"] = "<<arr[i]<<endl;
		}
	}


}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();		
	}

	return 0;
}
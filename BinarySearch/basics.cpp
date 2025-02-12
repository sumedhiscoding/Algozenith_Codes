#include<bits/stdc++.h>
using namespace std;
const int n=100100;
int arr[n];
int check(int mid,int x){
	if(arr[mid]>=x){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){	
	int n;
	cin>>n;
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int lo=0;int hi=n-1;int ans=-1;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(check(mid,x)==1){
			ans=mid;
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int q;
	cin>>q;
	vector<int> arr(n,0);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	while(q--){
		int c;int x;
		cin>>c>>x;
		if(c==1){
			auto it=lower_bound(arr.begin(),arr.end(),x);
			if(it==arr.end())
			{
				cout<<-1<<" ";
			}
			else
				cout<<*it<<" ";
		}
		else if(c==2){
			auto it=upper_bound(arr.begin(),arr.end(),x);
			if(it==arr.end()){
				cout<<-1<<" ";
			}	
			else
			cout<<*it<<" ";
		}
		else if(c==3){
			auto it=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
			cout<<it<<" ";
		}else{
			auto it=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
			cout<<it<<" ";
		}
	}
		cout<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0) ; cout.tie(0);
int t;
//t=1;
cin>>t;

while(t--){
  solve();
}
return 0;
}
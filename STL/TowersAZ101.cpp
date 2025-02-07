#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
   multiset<int> towers;
  for(int i=0;i<n;i++){
  	auto x= towers.upper_bound(arr[i]);
  	if(x == towers.end()){
  		towers.insert(arr[i]);
  	}
  	else{
  		towers.erase(x);
  		towers.insert(arr[i]);
  	}
  }
  cout<<towers.size()<<endl;


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
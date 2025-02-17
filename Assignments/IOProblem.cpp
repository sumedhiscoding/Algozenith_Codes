#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string integer;
	string decimal;
	ss>>integer;
	ss>>decimal;
	int x=stoi(integer);
	auto it= decimal.find('.');
	int y=stoi(decimal.substr(0,it));
	int z=stoi(decimal.substr(it+1,decimal.length()-1));
	cout<< (z+x)<<'.'<<(y+x)<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0) ; cout.tie(0);
int t;
//t=1;
cin>>t;
string temp;
getline(cin,temp);
while(t--){
  solve();
}
return 0;
}
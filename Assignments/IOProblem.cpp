#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string garb;
	getline(cin,garb);

	while(t--){
		long long x;cin>>x;
		string decimal;
		getline(cin,decimal);
		stringstream ss(decimal);		
		string y;
		getline(ss,y,'.');
		y.erase(0,1);
		cout<<y<<endl;
		string z;
		getline(ss,z,'.');
		cout<<z<<endl;
		cout<<endl;
		int  x1,y1,z1;
		y1=stoll(x);
		z1=stoll(z);





	}

	return 0;

}

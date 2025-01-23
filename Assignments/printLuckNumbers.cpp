#include<iostream>
using namespace std;
bool isLucky(int i){
	//if any digit is not 4 and 7 then we return false
	// how to extract each digit
	bool ans=true;
	while(i){
		// cout<<"i : "<<i<<endl;
		int last_dig=i%10;
		if(last_dig!=4 and last_dig!=7){
			ans= false;
		}
		// cout<<"last dig : "<<last_dig<<endl;
		i=i/10;
	}
	return ans;
}
int main(){
	// int a,b;
	// cin>>a>>b;

	// for(int i=a;i<=b;i++){
	// 	if(isLucky(i)){
	// 		cout<<i<<" ";
	// 	}
	// }

	int test;
	cin>>test;
	cout<<isLucky(test)<<endl;


}
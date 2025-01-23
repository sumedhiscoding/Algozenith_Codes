#include<iostream>
using namespace std;
int sumOfDigits(string n){
	// cout<<n<<endl;
	int sum=0;


	for(int i=0;i<n.size();i++)
	{
		sum+=(n[i] - '0');
	}

	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		cout<<sumOfDigits(n)<<endl;
	}




	return 0;

}
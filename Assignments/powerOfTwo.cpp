#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int ans=true;
	//we have to find out of if its power of two or not
	while(n>2){
		if(n%2!=0){
			ans=false;
			// cout<<"false"<<endl;
		}
		n=n/2;
		// cout<<"n is :  "<<n<<endl;
	}
	if(n==2 and ans){
		cout<<"true"<<endl;
	}	
	else{
		cout<<"false"<<endl;
	}

	return 0;
}
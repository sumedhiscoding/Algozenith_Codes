#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"generating a random number between"<< a<<" "<<b<<endl;
	int x;
	cout<<"enter a seed value"<<endl;
	cin>>x;
	srand(x);
	cout<<a+(rand()%(b-a+1))<<endl; 

	return 0;
}
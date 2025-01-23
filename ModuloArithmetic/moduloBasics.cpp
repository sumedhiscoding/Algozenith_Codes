#include<bits/stdc++.h>
using namespace std;
class LimitsOfCPP{
public:
	void rangesOfInts(){
		cout << "Value of INT_MAX : " <<INT_MAX<<endl;
		cout << "Value of INT_MIN : " <<INT_MIN<<endl;
		// cout << "Value of INT_MAX + 1 : " <<INT_MAX+1<<endl;
	} 

	void cyclic(int x,int y){
		cout<<"cyclic nature of modulus"<<endl;
		for(int i=0;i<y;i++){
			cout<< "i is " << i<< " => " << i << "%" << x<< " = " <<i%x<<"\n";
		}
		cout<<endl;
	}
	void cyclicNegative(int x , int y){
		cout<<"cyclic in terms of negative" << endl;
		for (int i = -0; i != -y; --i)
		{
			cout<< "i is " << i<< " => " << i << "%" << x<< " = " <<i%x<<"\n";	
		}
		cout<<endl;
	}


};



int main(){
	LimitsOfCPP lims;
	// lims.rangesOfInts();
	lims.cyclic(3,5);
	lims.cyclicNegative(3,5);

}
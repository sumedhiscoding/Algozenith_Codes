#include<bits/stdc++.h>
using namespace std;

class STL{
public:
	vector<int> arr ;
	pair<int,string> pt;
	STL(){}

	STL(vector<int> a){
		int i=0;
		for(auto x:a){
			arr.push_back(x);
		}
	}

	STL(pair<int,string> a){
		pt=a;
	}

	void STLsort() {
	        sort(arr.begin(), arr.end()); 
	}

	void STLprint(){
		for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	void STLpairPrint(){
		cout<<pt.first<<" "<<pt.second<<endl;
	}




};


int main(){
	STL vec({5,4,3,2,1});
	pair<int,string> pt { 1,"sumedh"};
	pair<int,string> ptArr[5]  {{1,"sumedh"},{2,"medh"},{3,"edh"},{4,"sum"},{5,"suh"}  } ;
	STL pair(pt);
	vec.STLprint();
	vec.STLsort();
	cout<<"After sorting the array"<<endl;
	vec.STLprint();
	pair.STLpairPrint();
	cout<<ptArr[2].first<<" "<<ptArr[2].second<<endl;

	




	return 0;
}
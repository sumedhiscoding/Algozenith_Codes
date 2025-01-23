#include<iostream>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int arr[n];
	int brr[n-1];
	int crr[n-2];
	int sum1=0,sum2=0,sum3=0 ;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum1+=arr[i];
	}

	for (int i = 0; i < n-1; ++i)
	{
		cin>>brr[i];
		sum2+=brr[i];
	}

	for (int i = 0; i < n-2; ++i)
	{
		cin>>crr[i];
		sum3+=crr[i];
	}

	cout<<sum1-sum2<<" ";
	cout<<sum2-sum3<<endl;
	// cout<<"sum3 "<<sum3<<endl;



}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
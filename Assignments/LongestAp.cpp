
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	void solve();
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			solve();
		}
		return 0;
	}
	void solve(){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int diff[n];
		for(int i=0;i<n-1;i++){
			diff[i]=arr[i+1]-arr[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			cout<<diff[i]<<" ";
		}	
		int max_Count=INT_MIN;
		int count=0;
		int current=diff[0];
		for(int i=0;i<n-1;i++){
			if(diff[i]==current){
				count++;
			}
			else{
				current=diff[i];
				count=1;
			}
			max_Count=max(max_Count,count);
		}
		cout<<endl;
		cout<<max_Count+1<<endl;



	}


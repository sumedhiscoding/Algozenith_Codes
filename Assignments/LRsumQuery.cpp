#include<iostream>
using namespace std;
#define int long long 
const int mod=1e9+7;
signed main(){
    int n,q;cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    //make prefix sum;
    int pre[n+2];
    pre[1]=arr[1];
    for(int i=2;i<=n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1] <<endl;    
    }
    return 0;
}   
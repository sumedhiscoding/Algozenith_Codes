// question 6
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }       
    int q;
    cin>>q;
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int sum=0;
        for(int i=1;i<k;i++){
            sum+=arr[l++]*i;
            sum+=arr[r--]*i;
        }
        for(int i=l;i<=r;i++){
            sum+=arr[i]*k;
        }
        cout<<sum<<endl;
    }

    return 0;
}
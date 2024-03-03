#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int l=0;
        bool z=true;
        for(int i=0;i<n;++i) cin>>arr[i];
        for(int i=0;i<n;++i){
            if(arr[i]<k){
                // cout<<"NO "<<i+1<<endl;
                z=false;
                l=i+1;
                break;
            }
            else{
                int rem=arr[i]-k;
                arr[i+1]+=rem;
            }
        }
        if(z) cout<<"YES"<<endl;
        else cout<<"NO "<<l<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t; 
    
    while(t--){
        int n;
        cin>>n;
        int z;
        cin>>z;
        if(n%2==0) n=n/2;
        else n=(n+1)/2;
        if(z>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
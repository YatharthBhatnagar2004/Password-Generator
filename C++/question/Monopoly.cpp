#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t; 
    
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        int sumS=p+q+r;
        int sumP=s+q+r;
        int sumQ=p+s+r;
        int sumR=p+q+s;
        bool flag=true;
        if(s>sumS){
            cout<<"YES"<<endl;
            flag=true;
        }else if(p>sumP){
            cout<<"YES"<<endl;
            flag=true;
        }else if(q>sumQ){
            cout<<"YES"<<endl;
            flag=true;
        }else if(r>sumR){
            cout<<"YES"<<endl;
            flag=true;
        }else{
            flag=false;
        }
        
        if(flag==false) cout<<"NO"<<endl;
    }
}
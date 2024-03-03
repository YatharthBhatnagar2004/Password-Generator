#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t; 
    
    while(t--){
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int cnt0=0,cnt1=0;
        if(b1==0)cnt0++;
        else cnt1++;
        if(b2==0)cnt0++;
        else cnt1++;
        if(b3==0)cnt0++;
        else cnt1++;
        if (cnt1==3||cnt1==2){
            cout<<"Not now"<<endl;
        }else{
            cout<<"Water filling time"<<endl;
        }
    }

}
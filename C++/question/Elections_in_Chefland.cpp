#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int Xa,Xb,Xc;
        cin>>Xa>>Xb>>Xc;
        if(Xa>=55)  cout<<"A"<<endl;

        if(Xb>=55)  cout<<"B"<<endl;

        if(Xc>=55)  cout<<"C"<<endl;
        
        if(Xa<55&&Xb<55&&Xc<55) cout<<"NOTA"<<endl;
    }
}
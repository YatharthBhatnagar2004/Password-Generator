#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int h=1;
    if(n==0){
        cout<<"1";
        return 0;
    }
    for(int i=1;i<=n;++i){
        if(i%2==0){
            h+=1;
        }else{
            h*=2;
        }
    }
    cout<<h;
}
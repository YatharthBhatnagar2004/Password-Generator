#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=s.length();
        int y=x-2;
        if(x>10){
            cout<<s.front();
            cout<<y;
            cout<<s.at(x-1);
            cout<<endl;

        }else cout<<s<<endl;

    }
}
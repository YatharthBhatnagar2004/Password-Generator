#include<bits/stdc++.h>
using namespace std; 

int main(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<(n+1)/2;++i){
        for(int j=0;j<n-1-i;j+=2){
            if(s[j+2]<s[j]) swap(s[j+2],s[j]);
        }
    }
    cout<<s;
}
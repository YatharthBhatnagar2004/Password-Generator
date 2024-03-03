#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==0){
        int i=0;
        int j=1;
        while(i<n-1){
            swap(s[i],s[j]);
            i+=2;j+=2;
        }
    }else{
        int i=0;
        int j=1;
        while(i<n-2){
            swap(s[i],s[j]);
            i+=2;j+=2;
        }
    }
    for(int i=0;i<n;++i){
      int x=s[i]-97;
      x*=-1;
      s[i]=char(x+25+97);
    }
    for(int i=0;i<n;++i){
        cout<<s[i];
    }
    cout<<endl;

    
}
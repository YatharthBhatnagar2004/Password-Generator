#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>s>>n;
        int sum=0,ans=0;
        ans=s/n;
        sum+=ans;
        s=s%n;
        if (s==1){
            cout<<sum<<endl;
        }
        else if(s%2==0&&s<=n){
            sum++;
        }else if(s%2!=0&&s<=n){
            sum+=2;
        }
        cout<<sum<<endl;
    }
}
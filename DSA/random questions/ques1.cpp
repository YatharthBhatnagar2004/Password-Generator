#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        prod=rem*prod;
        sum+=rem;
        n=n/10;
    }
    int ans=prod-sum;
    cout<<ans;

}
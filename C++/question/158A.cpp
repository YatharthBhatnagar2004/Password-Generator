#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    int count=0;

    for(int i=1;i<=n;++i){
        if(arr[i]>=arr[x]&&arr[i]>0){
            count++;
        }
    }
    cout<<count;
}
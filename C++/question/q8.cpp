#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int d=0;
    cin>>d;
    int m=0;
    cin>>m;
    int count=0;
    for(int i=0;i<n;++i){
        for (int j = 0; j < m; j++)
        {
            int sum=0;
            sum+=arr[i+j];
            if(sum==d){
                count++;
            }
        }
        
    }
    cout<<count;
}
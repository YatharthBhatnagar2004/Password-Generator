#include<bits/stdc++.h>
using namespace std; 

bool search(int arr[],int n,int key){

    int start=0;int end=n-1;
    int mid=(start+end)/2;
    
    while(start<=end){
        if(key==arr[mid]){
            return 1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    
    // int maxi=arr[0];
    // int j=0;
    // for(int i=0;i<n;++i){
    //     maxi=max(arr[i],maxi);
    // }
    // for(int i=0;i<n;++i){
    //     if(arr[i]==maxi) {
    //         arr[i]=0;
    //     }
    // }
    // maxi=0;
    // for(int i=0;i<n;++i){
    //     maxi=max(arr[i],maxi);
    // }
    // cout<<maxi;

    for(int i=0;i<n;i+=2){
        if(i==n-1){
            cout<<arr[n-1];
            break;
        }
        if(arr[i]!=arr[i+1]){
            cout<<arr[i];
            break;
        }
    }

    

}
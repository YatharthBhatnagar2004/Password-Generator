#include<bits/stdc++.h>
using namespace std;
int pivot( int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        return s;
    }
}
int main(){
    int arr[10]{8,9,10,11,20,1,2,4,5,7};
    cout<<pivot(arr,10);
}
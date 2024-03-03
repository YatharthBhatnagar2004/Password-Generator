#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<"Array in start is: ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Array after reversing is: ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    //---------------INTEGER HASHING------------------------------------------------
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    // map<int,int>mpp;
    unordered_map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }
    cout<<endl;
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<mpp[number];
    // }
    

    //---------------STRING HASHING-------------------------------------------------
    // string s;
    // cin>>s;
    // map<char,float>mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[s[i]]+=0.1;
    // }
    // for(auto it:mpp){
    //     cout<<it.first<<"-->"<<it.second<<endl;
    // }
    

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n=0;
    cin>>n;
    vector<int> arr(n);
    int k = 0;
    cin >> k;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<k;++i){
        v.push_back(arr[i]);
    }
    int mini=v[0];
    int maxi=v[v.size()-1];
    cout<<maxi-mini;
}
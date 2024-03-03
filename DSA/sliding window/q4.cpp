#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int maxi=INT_MIN,i=0,j=0;
    list<int>l;
    while(j<n){
        // maxi=max(maxi,arr[j]);
        while(!l.empty()&&l.front()<arr[j]){
            l.pop_front();
            // cout<<1;
        }
        l.push_back(arr[j]);
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            // cout<<maxi<<" ";
            cout<<l.front()<<" ";
            if(arr[i]==l.front()){
                // maxi=max(arr[j-1],arr[j]);
                l.pop_front();
            }
            ++i;
            j++;
        }
    }   
}

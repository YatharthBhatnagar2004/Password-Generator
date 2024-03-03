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
    int ans = 0, i = 0, j = 0;
    list<int>l;
    while(j<n){
        if(arr[j]<0) l.push_back(arr[j]);
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            if(l.empty()==true){
                cout<<0<<" ";
            }else{
                cout<<l.front()<<" ";
            }

            if(arr[i]==l.front()){
                l.pop_front();
            }
            ++i;
            j++;
        }

    }
}

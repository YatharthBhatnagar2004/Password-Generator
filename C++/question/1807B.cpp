#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int sumeven=0,sumodd=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            if(arr[i]&1){
                sumodd+=arr[i];
            }else{
                sumeven+=arr[i];
            }
        }
        if(sumeven>sumodd){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
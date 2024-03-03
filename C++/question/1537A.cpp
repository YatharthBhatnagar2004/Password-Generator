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
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        int ans=0;
        if(sum<n){
            ans=(n+1)-sum;
            cout<<1<<endl;
        }else if(sum>n){
            ans=sum-n;
            cout<<ans<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
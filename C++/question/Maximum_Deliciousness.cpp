#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, k, n;
        cin >> n >> k >> l;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        long long int ans=0;
        for (int i = l-1; i < n; i+=k)
        {
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }
}
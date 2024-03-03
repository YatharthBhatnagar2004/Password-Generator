#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        double sum=0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < k; ++i)
        {
            sum -= arr[i];
        }
        for (int i = n - k; i < n; ++i)
        {
            sum-=arr[i];
        }
        double ans=0.00;
        ans=sum/(n-(2*k));
        cout<<fixed<<setprecision(6);
        cout<<ans<<endl;
    }
}
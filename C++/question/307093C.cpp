#include <bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{

    int n;
    long long s;
    cin >> n >> s;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long res = 0;
    long long x = 0;
    long long l = 0;
    for (long long r = 0; r < n ; ++r)
    {
        if (x <= s)
        {
            res = max(res, x);
            // cout<<res<<endl;
        }
        x += arr[r];

        while ( x > s)
        {
            // cout<<x<<" ";
            x -= arr[l];
            l++;
            // cout<<x<<endl;
        }
    }
    cout << res;
}
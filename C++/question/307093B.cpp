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
    int res = INT_MAX;
    long long x = 0;
    int l = 0,r=0;
    for ( r = 0; r < n; ++r)
    {
        x += arr[r];
        while (x >= s)
        {
            x -= arr[l];
            res = min(res, r - l + 1);
            l++;
        }
        // cout << r << " " << l << " " << x << endl;
    }
    if (x >= s)
    {
        res = min(res, r - l );
        // cout << x << endl;
    }
    if (res == INT_MAX)
        cout << -1 << endl;
    else
        cout << res;
}
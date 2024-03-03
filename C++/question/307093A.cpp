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
    int res = 0;
    long long x = 0;
    int l = 0;
    for (int r = 0; r < n ; ++r)
    {
        x += arr[r];
        if (x <= s)
        {
            res = max(res, r - l + 1);
        }

        while ( x > s)
        {
            x -= arr[l];
            l++;
        }
    }
    cout << res;
}
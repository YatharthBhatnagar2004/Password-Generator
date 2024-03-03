#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> a >> b >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long int ans = 0;
        ans += b - 1;
        long long int cnt = 1;
        for (int i = 0; i < n; ++i)
        {
            cnt += arr[i];
            if (cnt > a)
            {
                cnt = a;
            }
            if (i == n - 1)
            {
                ans += cnt;
            }
            else
            {
                ans += cnt - 1;
            }
            cnt = 1;
        }
        cout << ans << endl;
    }
}
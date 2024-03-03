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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        int maxi2 = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            maxi2 = max(maxi2, arr[i]);
        }

        int hash[maxi2 + 1] = {0};
        for (int i = 0; i < n; ++i)
        {
            hash[arr[i]]++;
        }
        int maxi1 = INT_MIN;
        for (int i = 0; i < maxi2 + 1; ++i)
        {
            maxi1 = max(hash[i], maxi1);
        }
        long int ans = n - maxi1;

        cout << ans << endl;
    }
}
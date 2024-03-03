#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        int ans = 0;
        int arr[n], h[n + 1];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> h[i];
        }
        h[n] = INT_MAX;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j <= n; ++j)
            {
                if (h[j] % h[j + 1] != 0)
                {
                    v.push_back({i, j});
                    i = j;
                    break;
                }
            }
        }
        long long int sum = 0;
        int maxi = 0;
        vector<int> v1;
        for (auto x : v)
        {
            int i = x.first, j = x.first;
            // cout<<i<<" "<<x.second<<endl;
            while (j <= x.second)
            {
                sum += arr[j];
                if (sum < k)
                {
                    maxi = max(j - i + 1, maxi);
                    j++;
                }
                else if (sum == k)
                {
                    maxi = max(maxi, j - i + 1);
                    j++;
                }
                else
                {
                    while (sum > k)
                    {
                        sum -= arr[i];
                        i++;
                        if (sum <= k)
                        {
                            maxi = max(j - i + 1, maxi);
                        }
                    }
                    j++;
                }
            }
            sum = 0;
        }
        cout << maxi << endl;
    }
}

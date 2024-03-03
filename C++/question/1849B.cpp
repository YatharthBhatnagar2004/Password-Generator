#include <bits/stdc++.h>
using namespace std;
bool ifswap(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    else
    {
        if (a.second < b.second)
            return true;

        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector<pair<int, int>> v;
        vector<pair<int, int>> zero;
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % k != 0)
            {
                v.push_back({arr[i] % k, i});
            }
            else
            {
                zero.push_back({arr[i] % k, i});
            }
        }
        sort(v.begin(), v.end(), ifswap);
        sort(zero.begin(), zero.end(), ifswap);
        for (auto x : zero)
        {
            cout << x.second << " ";
        }
        for (auto x : v)
        {
            cout << x.second << " ";
        }
        // for (auto x : v)
        // {
        //     cout << x.second << " ";
        // }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    vector<int> d;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a - 1, b - 1});
        d.push_back(c);
    }
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a - 1; i < b; ++i)
        {
            arr[v[i].first] += d[i];
            if (v[i].second + 1 < n)
            {
                arr[v[i].second + 1] -= d[i];
            }
        }
    }
    // for (int i = 1; i < n; ++i)
    // {
    //     arr[i] = arr[i - 1] + arr[i];
    // }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}

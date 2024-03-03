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
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            mp[a[i]] = max(x, mp[a[i]]);
        }
        long long sum = 0;
        for (auto x : mp)
        {
            if (x.second > 0)
            {
                sum += x.second;
            }
        }
        cout << sum << endl;
    }
}

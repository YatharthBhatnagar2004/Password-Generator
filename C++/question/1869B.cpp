#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<long long int, long long int>> v;
        for (int i = 0; i < n; i++)
        {
            long long int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        a -= 1;
        b -= 1;
        long long int mini1 = abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
        long long int mini2 = INT_MAX, mini3 = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            mini2 = min(mini2, abs(v[a].first - v[i].first) + abs(v[a].second - v[i].second));
            mini3 = min(mini3, abs(v[b].first - v[i].first) + abs(v[b].second - v[i].second));
        }
        // cout<<mini2<<mini3<<endl;
        long long int ans = min(mini1, mini2 + mini3);

        cout << ans << endl;
    }
}
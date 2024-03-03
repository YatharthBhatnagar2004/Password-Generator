#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<pair<int, int>> vector;
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            int s, e;
            cin >> s >> e;
            if (vector.size() > 0 && s >= vector[0].first && e >= vector[0].second)
            {
                flag = false;
            }
            vector.push_back({s, e});
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = vector[0].first;
            cout << ans << endl;
        }
    }
}

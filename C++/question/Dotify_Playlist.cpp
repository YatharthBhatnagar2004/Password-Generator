#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int m[n];
        int L[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> m[i];
            cin >> L[i];
        }
        int count = 0;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; ++i)
        {
            if (L[i] == l)
            {
                v.push_back(i);
            }
        }

        for (int i = 0; i < v.size(); ++i)
        {
            v1.push_back(m[v[i]]);
        }
        sort(v1.begin(), v1.end(), greater<>());
        if (v1.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int i = 0; i < k; ++i)
            {
                count += v1[i];
            }

            cout << count << endl;
        }
    }
}
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
        int x = INT_MAX, y = 0, ans = 0;
        int len[n], q[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> len[i] >> q[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (len[i] <= 10)
            {
                if (q[i] > y)
                {
                    y = q[i];
                    ans = i;
                    x = len[i];
                }
                else if (q[i] == y)
                {
                    if (len[i] < x)
                    {
                        ans = i;
                        x = len[i];
                    }
                }
            }
        }
        cout << ans + 1 << endl;
    }
}
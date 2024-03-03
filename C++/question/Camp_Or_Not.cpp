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
        int d[n];
        int p[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> d[i] >> p[i];
        }
        int q;
        cin >> q;
        int de[q];
        int re[q];
        for (int i = 0; i < n; ++i)
        {
            cin >> de[i] >> re[i];
        }
        int j = 0, k = 0, i = 0, z = q, ans;
        while (z--)
        {
            ans = 0;
            i = 0;
            if (de[k] < d[i])
            {
                cout << "Go Sleep" << endl;
                k++;
            }
            else
            {
                while (i < n && k < q && de[k] >= d[i])
                {
                    ans += p[i];
                    ++i;
                }
                if (ans >= re[k])
                {
                    cout << "Go Camp" << endl;
                }
                else
                {
                    cout << "Go Sleep" << endl;
                }
                k++;
            }
        }
    }
}

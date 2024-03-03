#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        int ans = 0;

        if (k < x)
        {
            ans += k * 10;
            ans += p;
            cout << ans << endl;
        }
        else
        {
            if (k == n)
                ans += 20;
            ans += x * 10;
            ans += (k - x) * 5;
            ans += p;
            cout << ans << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = 1;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            n -= 2;
            ans += (n / x);
            if (n % x != 0)
            {
                ans += 1;
            }
            cout << ans << endl;
        }
    }
}
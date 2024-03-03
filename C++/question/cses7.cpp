#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int y, x;
        cin >> y >> x;
        if (x >= y)
        {
            if (x % 2 != 0)
            {
                long long int ans = 0;
                ans = 1LL * ((1LL * x * x) - (y - 1));
                cout << ans << endl;
            }
            else
            {
                long long int vertex = 0;
                vertex = 1LL * ((1LL * x * x) - (x - 1));
                cout << vertex - (x - y) << endl;
            }
        }
        else
        {
            if (y % 2 != 0)
            {
                long long int vertex = 0;
                vertex = 1LL * ((1LL * y * y) - (y - 1));
                cout << vertex - (y - x) << endl;
            }
            else
            {
                long long int ans = 0;
                ans = 1LL * ((1LL * y * y) - (x - 1));
                cout << ans << endl;
            }
        }
    }
}
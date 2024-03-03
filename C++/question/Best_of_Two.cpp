#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; ++i)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for (int i = 0; i < 3; ++i)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        int x, y;
        int min1 = INT_MAX, min2 = INT_MAX;
        for (int i = 0; i < 3; ++i)
        {
            min1 = min(min1, a[i]);
            min2 = min(min2, b[i]);
        }
        sum1 -= min1;
        sum2 -= min2;
        if (sum1 < sum2)
            cout << "Bob" << endl;
        else if (sum1 > sum2)
            cout << "Alice" << endl;
        else
            cout << "Tie" << endl;
    }
}
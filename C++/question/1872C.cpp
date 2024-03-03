#include <bits/stdc++.h>
using namespace std;
pair<int, int> ans(long long int l, long long int r)
{
    if (abs(l - r) >= 2 && min(l, r) != 1)
    {
        if (min(l, r) & 1)
        {
            return {min(l, r) - 1, 2};
        }
        else
        {
            return {min(l, r), 2};
        }
    }
    if (min(l, r) == 1 && abs(l - r) <= 2)
    {
        return {-1, -1};
    }
    if (min(l, r) == 1 && abs(l - r) > 2)
    {
        return {2, 2};
    }
    if (abs(l - r) == 1 && (l != 2 && r != 2))
    {
        if (l % 2 == 0)
        {
            return {l / 2, l / 2};
        }
        else
        {
            return {r / 2, r / 2};
        }
    }
    if (abs(l - r) == 1 && (l == 2 || r == 2))
    {
        return {-1, -1};
    }
    if (l == r && l >= 4 && r >= 4)
    {
        if (l % 2 == 0)
        {
            return {l / 2, l / 2};
        }
        else
        {
            bool flag = 0;
            for (int i = 2; i <= sqrt(l); ++i)
            {
                if (l % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                int i = 2;
                for (i; i < l; ++i)
                {
                    if (l % i == 0)
                    {
                        break;
                    }
                }
                return {i, l - i};
            }
            else
            {
                return {-1, -1};
            }
        }
    }
    if (l == r && l <= 3 && r <= 3)
    {
        return {-1, -1};
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        if (ans(l, r).first == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans(l, r).first << " " << ans(l, r).second << endl;
        }
    }
}
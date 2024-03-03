#include <bits/stdc++.h>
using namespace std;
pair<int, int> ans(int l, int r)
{
    if (r < 2 * l)
    {
        return {-1, -1};
    }
    return {l, 2 * l};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << ans(l, r).first << " " << ans(l, r).second << endl;
    }
}
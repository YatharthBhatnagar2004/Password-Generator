#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, l;
        cin >> w >> l;
        int ans = 2 * (w * l) + 2;
        if (ans % 4 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
bool ans(int n, int m)
{
    if (n == m)
    {
        return 1;
    }
    if (n < m|| n % 3 != 0 )
    {
    // cout<<n<<" "<<m<<endl;
        return 0;
    }
    return ans((2 * n) / 3, m) || ans(n / 3, m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (ans(n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
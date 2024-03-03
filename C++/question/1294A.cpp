#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool ans(LL int n, LL int a, LL int b, LL int c)
{
    
    long long mx = -1;
    mx = max(a, b);
    mx = max(mx, c);
    long long int give = 0;
    give += (mx - a);
    give += (mx - b);
    give += (mx - c);
    if (give > n)
    {
        return 0;
    }
    else
    {
        n -= give;
        if (n % 3 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, c;
        cin >> a >> b >> c >> n;
        if (ans(n, a, b, c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
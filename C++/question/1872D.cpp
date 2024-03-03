#include <bits/stdc++.h>
using namespace std;

long long int ans(long long int n, long long int x, long long int y)
{
    long long int gcd = __gcd(x, y);
    long long int lcm = 0;
    lcm = (1LL * x * y) / gcd;
    long long int common = n / lcm;
    long long int px = 0, py = 0;
    px = n / x;
    py = n / y;
    px -= common;
    py -= common;
    long long int sumx = 0, sumy = 0;
    sumx =(1LL* (1LL * px * (n + (n - px + 1))) / 2);
    sumy = (1LL*(1LL * py * (py + 1)) / 2);
    long long int ans=(sumx-sumy);
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y;
        cin >> n >> x >> y;
        cout << ans(n, x, y) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
bool ans(long long int n, long long int k, long long int x)
{
    long long int random = (1LL * k * (k + 1) / 2);
    long long int random1 = (1LL * k * (2 * n - k + 1) / 2);
    if (random > x || random1 < x)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            arr[i] = i + 1;
        }
        if (ans(n, k, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
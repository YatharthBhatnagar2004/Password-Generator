#include <bits/stdc++.h>
using namespace std;
void ans(long long int n, long long int m)
{
    if (n % m == 0)
    {
        cout << 0 << endl;
        return;
    }
    float a = 0.5;
    int count = 1;
    bool flag = true;
    while (a != 0)
    {
        n = n * 2 * 1LL;
        if (n % m == 0)
        {
            flag = false;
            cout << count << endl;
            return;
        }
        a /= 2;
        count++;
    }
    if (flag)
    {
        cout << -1 << endl;
        return; 
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        ans(n, m);
    }
}
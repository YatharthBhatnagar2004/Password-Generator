#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while (i == j)
        {
            ans += (a[j] - a[i]);
            i++;
            j--;
        }
        cout << ans << endl;
    }
}
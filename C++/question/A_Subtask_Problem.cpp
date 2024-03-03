#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int count = 0;
        int i = 0;
        while (i < n)
        {
            if (arr[i] == 1)
            {
                count++;
                ++i;
            }
            if (arr[i] == 0)
            {
                break;
            }
        }

        if (count >= m && count < n)
        {
            cout << k << endl;
        }
        else if (count == n)
        {
            cout << 100 << endl;
        }
        else if (count < m)
        {
            cout << 0 << endl;
        }
    }
}
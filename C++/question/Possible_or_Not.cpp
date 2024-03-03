
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, b;
        cin >> n >> b;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        bool flag = false;

        for (int i = 0; i < (1 << n); i++)
        {
            int ans = -1;
            for (int j = 0; j < n; ++j)
            {
                if (i & (1 << j))
                {
                    if (ans == -1)
                    {
                        ans = arr[j];
                    }
                    else
                    {
                        ans &= arr[j];
                    }
                }
            }
            if (ans == b)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
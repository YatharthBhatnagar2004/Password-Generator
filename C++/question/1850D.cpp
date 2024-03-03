#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 1;
        vector<long long> v;
        if (n == 1)
            cout << 0 << endl;
        else
        {

            for (int i = 0; i < n - 1; ++i)
            {
                if (arr[i + 1] - arr[i] <= k)
                {
                    count++;
                }
                else
                {
                    v.push_back(count);
                    count = 1;
                }
            }
            if (count != 1)
            {
                v.push_back(count);
            }
            long long maxi = INT_MIN;
            // for (int i = 0; i < v.size(); ++i)
            // {
            //     if (v[i] > maxi)
            //     {
            //         maxi = v[i];
            //     }
            // }
            
            if (n - maxi == -1)
            {
                cout << 0 << endl;
            }
            else
                cout << n - maxi << endl;
        }
    }
}
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
        unordered_map<int, int> mp, mp1;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int count = 1, indx = 0;
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] == arr[0])
            {
                count++;
                if (count == k)
                {
                    indx = i;
                    break;
                }
            }
        }
        for (int i = indx; i < n; ++i)
        {
            mp1[arr[i]]++;
        }
        if (arr[0] == arr[n - 1])
        {
            if (mp[arr[0]] >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (count < k)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (mp1[arr[n - 1]] >= k)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}

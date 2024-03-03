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
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp.find(k) == mp.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
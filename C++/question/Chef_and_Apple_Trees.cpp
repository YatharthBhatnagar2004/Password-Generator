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
        int arr[n];
        unordered_map<int, int> hash;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            hash[arr[i]]++;
        }
        int i = 0;
        for (auto it : hash)
        {
            ++i;
        }
        cout << i << endl;
    }
}
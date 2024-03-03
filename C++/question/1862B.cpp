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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            v.push_back(arr[i]);
        }
        for (int i = 1; i < n; ++i)
        {
            if (v[i - 1] > v[i])
            {
                v1.push_back(i);
                // cout << v[i] << " ";
            }
            // cout << v[i] << " ";
        }
        cout<<v.size()+v1.size()<<endl;
        cout<<v[0]<<" ";
        for (int i = 1; i < n; ++i)
        {
            if (v[i - 1] > v[i])
            {
                // v1.push_back(i);
                cout << v[i] << " ";
            }
            cout << v[i] << " ";
        }

        cout << endl;
    }
}
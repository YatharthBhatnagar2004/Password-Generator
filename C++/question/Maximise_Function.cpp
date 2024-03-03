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
        int x = 0, y = 1, z = 2;
        vector<int> v;
        while (z < n)
        {
            v.push_back(abs(arr[x] - arr[y]) + abs(arr[z] - arr[y]) + abs(arr[x] - arr[z]));
            x++;
            y++;
            z++;
        }
        int maxi=0;
        for(int i=0;i<v.size();++i)
        {
            maxi=max(maxi,v[i]);
        }
        cout<<maxi<<endl;
    }
}
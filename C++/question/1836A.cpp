#include <bits/stdc++.h>
using namespace std;
bool ans(int arr[], int n)
{
    bool flag = 1;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        return 0;
    }
    if (arr[0] != 0)
    {
        return 0;
    }
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[arr[i]]++;
    }
    bool flag2 = 1;
    vector<int> v;
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] > v[i - 1])
        {
            flag2 = 0;
        }
        // cout<<v[i];
    }
    if (flag2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
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
        sort(arr, arr + n);
        // cout<<ans(arr,n);
        bool flag=ans(arr,n);
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
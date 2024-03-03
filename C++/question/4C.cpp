#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for(int i=0;i<n;++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    // for(int i=0;i<n;++i)
    // {
    //     cout<<v[i]<<endl;
    // }
    map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {
        // cout<<1;
        mp[v[i]]++;
        if (mp[v[i]] == 1)
        {
            cout << "OK" << endl;
        }
        else if (mp[v[i]] > 1)
        {
            cout << v[i] << mp[v[i]]-1<< endl;
        }
    }
}
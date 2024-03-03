#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    vector<int> v;
    int i = 0;
    v.push_back(0);
    while (t--)
    {
        cin >> a >> b;
        v.push_back(v[i] + (b - a));
        i++;
    }
    int maxi = v[0];
    for (int i = 1; i < v.size(); ++i)
    {
        maxi=max(v[i],maxi);
    }
    cout<<maxi;
}
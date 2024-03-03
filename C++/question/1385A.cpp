#include <bits/stdc++.h>
using namespace std;
vector<int> ans(int x, int y, int z)
{
    vector<int> v;
    int a, b, c;
    if (x == y && y == z)
    {
        v.push_back(x);
        v.push_back(x);
        v.push_back(x);
        return v;
    }
    if (x != y)
    {
        b = x;
        c = y;
        if (max(b, c) != z)
        {
            v.push_back(1);
            return v;
        }
        else
        {
            v.push_back(x);
            v.push_back(y);
            v.push_back(min(x,y));
            return v;
        }
    }
    else
    {
        if (z > x)
        {
            v.push_back(1);
            return v;
        }
        else
        {
            v.push_back(x);
            v.push_back(z);
            v.push_back(z);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> v = ans(x, y, z);
        if (v.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}
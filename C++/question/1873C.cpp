#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        for (int i = 0; i < 10; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        vector<pair<int, int>> v1;
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    v1.push_back({i + 1, j + 1});
                }
            }
        }
        int sum = 0;
        for (auto x : v1)
        {
            if (x.first <= 5 && x.second <= 5)
            {
                sum += min(x.first, x.second);
            }
            else if (x.first <= 5 && x.second >= 5)
            {
                sum += min(x.first, 10 - x.second + 1);
            }
            else if (x.second <= 5 && x.first >= 5)
            {
                sum += min(x.second, 10 - x.first + 1);
            }
            else if (x.first >= 5 && x.second >= 5)
            {
                sum += min(10 - x.second + 1, 10 - x.first + 1);
            }
        }
        cout<<sum<<endl;
    }
}
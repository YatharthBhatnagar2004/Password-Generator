#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        unordered_set<long long> st;
        for (int i = 0; i < n; ++i)
        {
            long long x;
            cin >> x;
            st.insert(x);
        }
        for (int i = 0; i < m; ++i)
        {
            long long x;
            cin >> x;
            if (st.find(x) != st.end())
            {
                cout << "YES" << endl;
                st.insert(x);
            }
            else
                cout << "NO" << endl;
                st.insert(x);
        }
    }
}
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
        string s;
        cin >> s;
        string q = "";
        set<string> st;
        for (int i = 1; i < n; ++i)
        {
            q += s[i - 1];
            q += s[i];
            st.insert(q);
            q = "";
        }
        cout << st.size() << endl;
    }
}
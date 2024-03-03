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
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
        unordered_set<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            // cout<<s[i];
            st.insert(s[i]);
        }
        for(auto x:st){
            cout<<x<<" ";
        }
        // if (st[0] == 'm' && st[1] == 'e' && st[2] == 'o' && st[3] == 'w')
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = true;
        if (s.length() % 2 != 0)
            cout << "NO" << endl;
        else
        {
            int j = s.length() / 2;
            int i = 0;
            while (j < s.length())
            {
                if (s[i] == s[j])
                {
                    ++i;
                    ++j;
                }
                else
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
        }
    }
}
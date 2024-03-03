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
        if (s[0] == 'a' && s[1] == 'a')
        {
            cout << s[0] << " ";
            cout << s[1] << " ";
            for (int i = 2; i < s.length(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (s[0] == 'b' && s[1] == 'b')
        {
            cout << s[0] << " ";
            cout << s[1] << " ";
            for (int i = 2; i < s.length(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (s[0] == 'b' && s[1] == 'a')
        {
            cout << s[0] << " ";
            cout << s[1] << " ";
            for (int i = 2; i < s.length(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (s[0] == 'a' && s[1] == 'b')
        {
            // cout << s[0] << " ";
            int k = 0;
            for (int i = 2; i < s.length(); i++)
            {
                if (s[i] == 'a')
                {
                    k = i;
                }
            }
            if (k == 0)
            {
                for (int i = 0; i < s.length() - 2; ++i)
                {
                    cout << s[i];
                }
                cout << " " << s[s.length() - 2] << " ";
                cout << s[s.length() - 1] << endl;
            }
            else
            {
                cout << s[0] << " ";
                for (int i = 1; i < k; ++i)
                {
                    cout << s[i];
                }
                cout << " ";
                for (int i = k; i < s.length(); ++i)
                {
                    cout << s[i];
                }
                cout << endl;
            }
        }
    }
}
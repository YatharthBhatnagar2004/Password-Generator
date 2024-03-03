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
        int count = 0;
        if (s.length() == 2 && s[0] == '(' && s[1] == ')')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < s.length(); ++i)
            {
                if (i < s.length() && s[i] == '(' && s[i + 1] == '(' || s[i] == ')' && s[i + 1] == ')')
                {
                    count++;
                }
            }
            if (count >= 1)
            {
                for (int i = 0; i < s.length(); ++i)
                {
                    cout << "()";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < s.length(); i++)
                {
                    cout << "(";
                }
                for (int i = 0; i < s.length(); i++)
                {
                    cout << ")";
                }
                cout << endl;
            }
        }
    }
}

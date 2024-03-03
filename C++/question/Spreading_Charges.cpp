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
        int i = 0;
        while (i < n)
        {
            if (s[0] == '0')
            {
                if (s[1] == '-' || s[1] == '+')
                {
                    s[0] = s[1];
                }
                ++i;
            }
            if (i+1<n&&s[i] == '0')
            {
                if (s[i - 1] == '-' && s[i + 1] == '+' || s[i - 1] == '+' && s[i + 1] == '-')
                {
                    ++i;
                }
                else if (s[i - 1] == '-' && s[i + 1] == '-' || s[i - 1] == '+' && s[i + 1] == '+')
                {
                    s[i] = s[i - 1];
                }
                else if (s[i - 1] == '0' && s[i + 1] == '-' || s[i - 1] == '-' && s[i + 1] == '0')
                {
                    s[i] = '-';
                    ++i;
                }
                else if (s[i - 1] == '0' && s[i + 1] == '+' || s[i - 1] == '+' && s[i + 1] == '0')
                {
                    s[i] = '+';
                    ++i;
                }
            }
        }
        cout<<s<<endl;
    }
}
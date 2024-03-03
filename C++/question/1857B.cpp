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
        int indx = -1;
        if (s[0] - 48 >= 5)
        {
            cout << 1;
            for (int i = 0; i < s.size(); i++)
            {
                cout << 0;
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] - 48 >= 5)
                {
                    indx = i;
                    break;
                }
            }
            int i = indx - 1;
            int count = 0;
            if (indx == -1)
            {
                cout << s << endl;
            }
            else
            {

                for (i; i >= 0; i--)
                {
                    if (s[i] - 48 == 4)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (i != -1)
                {
                    s[i] += 1;
                    for (int j = 0; j <= i; ++j)
                    {
                        cout << s[j];
                    }
                    for (int k = 1; k < s.size() - i; ++k)
                    {
                        cout << 0;
                    }
                    cout << endl;
                }
                else
                {
                    cout << 1;
                    for (int i = 0; i < s.size(); i++)
                    {
                        cout << 0;
                    }
                    cout << endl;
                }
            }
        }
    }
}
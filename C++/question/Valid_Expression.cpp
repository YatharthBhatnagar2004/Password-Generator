#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char s[n];

        if (k == 0)
        {
            for (int i = 1; i <= n; ++i)
            {
                if(i==1) s[i]='-';
                else s[i]='*';
            }
            for (int i = 1; i <= n; ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (k == 1)
        {
            for (int i = 1; i <= n; ++i)
            {
                s[i] = '*';
            }

            for (int i = 1; i <= n; ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (k > 1)
        {
            int j = k - 1;
            for (int i = 1; i <= n; ++i)
            {
                if (i <= j)
                {
                    s[i] = '+';
                }
                else
                    s[i] = '*';
            }
            for (int i = 1; i <= n; ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else if (k < 0)
        {
            int max = (-n) + 1;
            if (k < max)
            {
                cout << -1 << endl;
            }
            else
            {
                int j = (-k) + 1;
                {
                    for (int i = 1; i <= n; ++i)
                    {
                        if (i <= j)
                            s[i] = '-';
                        else
                            s[i] = '*';
                    }
                    for (int i = 1; i <= n; ++i)
                    {
                        cout << s[i];
                    }
                    cout << endl;
                }
            }
        }
    }
}

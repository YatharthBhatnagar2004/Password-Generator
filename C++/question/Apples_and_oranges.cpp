#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 != 0 || b % 2 != 0)
            cout << 1 << endl;
        else
        {
            if (a == b)
                cout << a << endl;
            else
            {
                int l1 = a;
                int l2 = b;
                while (l1 != 0)
                {
                    l1 = l1 / 2;
                    if (l1 % 2 != 0)
                        break;
                }
                while (l2 != 0)
                {
                    l2 = l2 / 2;
                    if (l2 % 2 != 0)
                        break;
                }
                int l3 = a / l1;
                int l4 = b / l2;
                if (l3 <= l4)
                    cout << l3 << endl;
                else
                    cout << l4 << endl;
            }
        }
    }
}
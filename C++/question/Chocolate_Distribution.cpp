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
        if (n == 4)
        {
            cout << 2 << " " << 1 << " " << 1 << endl;
        }
        else if (n % 2 != 0)
        {
            cout << n / 2 << " " << n / 2 << " " << 1 << endl;
        }
        else
        {
            cout << 1 << " " << 1 << " " << n - 2 << endl;
        }
    }
}
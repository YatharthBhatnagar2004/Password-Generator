#include <bits/stdc++.h>
using namespace std;

void ans(int n)
{
    if (n % 2 == 0)
    {
        for (int i = n; i > n / 2; i -= 2)
        {
            cout << i << " ";
            int x = i;
            while (x % 2 == 0)
            {
                cout << x / 2 << " ";
                x /= 2;
            }
        }
        for (int i = n - 1; i > n / 2; i -= 2)
        {
            cout << i << " ";
        }
    }else{
        for (int i = n-1; i > n / 2; i -= 2)
        {
            cout << i << " ";
            int x = i;
            while (x % 2 == 0)
            {
                cout << x / 2 << " ";
                x /= 2;
            }
        }
        for (int i = n ; i > n / 2; i -= 2)
        {
            cout << i << " ";
        }

    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ans(n);
    }
}
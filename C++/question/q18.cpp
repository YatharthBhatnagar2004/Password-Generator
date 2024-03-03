#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        char arr[n];
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (i < n / 2)
                {
                    arr[i] = '1';
                    arr[i + 1] = '0';
                }
                else
                {
                    arr[i] = '0';
                    arr[i + 1] = '1';
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 2; i += 2)
            {
                arr[i] = '0';
                arr[i + 1] = '1';
            }
            arr[n - 2] = '1';
            arr[n - 1] = '0';
        }
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i];
        }
        cout << endl;
        t--;
    }
}

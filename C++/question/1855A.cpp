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
        int count = 0;
        int arr[n];
        for (int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
            if (arr[i] == i)
            {
                count++;
            }
        }
        if (count != 0)
        {
            if (count % 2 == 0)
            {
                cout << count / 2 << endl;
            }
            else
            {
                cout << count / 2 + 1 << endl;
            }
        }
        else
        {

            cout << count << endl;
        }
    }
}
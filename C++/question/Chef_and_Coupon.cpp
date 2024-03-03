#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int d, c;
        int arr1[3];
        int arr2[3];
        cin >> d >> c;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; ++i)
        {
            cin>>arr1[i];
            sum1 += arr1[i];
        }
        for (int i = 0; i < 3; ++i)
        {
            cin>>arr2[i];
            sum2 += arr2[i];
        }

        int x1 = 0, x2 = 0;
        x1 = sum1 + sum2 + (2 * d);
        int cnt = 2;
        if (sum1 >= 150)
            cnt--;
        if (sum2 >= 150)
            cnt--;
        x2 = sum1 + sum2 + c + (cnt * d);
        if (x2 < x1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
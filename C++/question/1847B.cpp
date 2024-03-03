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

        int arr[n];

        arr[0] = 2;

        arr[n - 1] = 3;

        arr[n / 2] = 1;

        int k = 4;

        for (int i = 1; i < n - 1; i++)
        {

            if (i == n / 2)
                continue;
            arr[i] = k;

            k++;
        }

        for (int i= 0; i < n; i++)
        {

            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}
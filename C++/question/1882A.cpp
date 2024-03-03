#include <bits/stdc++.h>
using namespace std;
void ans(int arr[], int n)
{
    if (n == 1)
    {
        if (arr[0] == 1)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
            return;
        }
    }
    long long int k = 0;
    if (arr[0] == 1)
    {
        k = 2;
    }
    else
    {
        k = 1;
    }
    for (int i = 1; i < n; ++i)
    {
        k++;
        if (k == arr[i])
        {
            k++;
        }
    }
    cout << k << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        ans(arr, n);
    }
}
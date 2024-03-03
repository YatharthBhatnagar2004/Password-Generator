#include <bits/stdc++.h>
using namespace std;
void ans(int arr[], int brr[], int n, int m, int k)
{
    if (k == 1)
    {
        if (arr[0] < brr[m - 1])
        {
            swap(arr[0], brr[m - 1]);
        }
        return;
    }
    if (k >= 2)
    {
        if (arr[0] < brr[m - 1])
        {
            swap(arr[0], brr[m - 1]);
        }
        sort(arr, arr + n);
        sort(brr, brr + m);
        if (brr[0] < arr[n - 1])
        {
            swap(arr[n - 1], brr[0]);
        }
        sort(arr, arr + n);
        sort(brr, brr + m);
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        int brr[m];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + m);
        long long int sum = 0;
        ans(arr, brr, n, m, k);
        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];
        }
        if (k <= 2)
        {
            cout << sum << endl;
        }
        else
        {
            if (k & 1)
            {
                sum -= arr[0];
                sum += brr[m - 1];
                cout << sum << endl;
            }
            else
            {
                cout << sum << endl;
            }
        }
    }
}
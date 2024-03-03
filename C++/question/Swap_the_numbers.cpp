#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        int i = 0, j = k;
        while (j < n)
        {
            if (j<n&&arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
                ++i;
                ++j;
            }
            else
            {
                j++;
            }
        }
        while (j - i >= k)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
                ++i;
            }
            else
            {
                i++;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
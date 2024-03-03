#include <bits/stdc++.h>
using namespace std;
bool ans(long long int arr[], int n, int mid, int x)
{
    long long int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < mid)
        {
            count += (mid - arr[i]);
        }
    }
    if (count <= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        long long start = 0, end = INT_MAX, solution = INT_MAX, mid;
        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (ans(arr, n, mid, x))
            {
                solution = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << solution << endl;
    }
}
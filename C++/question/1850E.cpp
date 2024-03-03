#include <bits/stdc++.h>
using namespace std;
bool ans(long long int arr[], int n, long long int mid, long long int c)
{
    long long int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        long long int x = arr[i] + 2 * mid;
        x = x * x * 1LL;
        sum += x;
        if (sum > c)
            return 0;
    }
    if (sum > c)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c;
        cin >> n >> c;
        long long int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        long long int low = 1, high = 1e9;
        long long int solution = 0;
        while (low <= high)
        {
            long long int mid = low + ((high - low) / 2);
            if (ans(arr, n, mid, c))
            {
                solution = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << solution << endl;
    }
}
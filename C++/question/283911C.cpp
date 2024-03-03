#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int low = 1, high = n, mid = low + (high - low) / 2, ans = n + 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    while (t--)
    {
        int k;
        cin >> k;
        int ans = binarysearch(arr, n, k);
        cout << ans << endl;
    }
}
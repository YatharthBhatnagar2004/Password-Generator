#include <bits/stdc++.h>
using namespace std;
long long int lower(int arr[], int n, int l)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    long long int ans = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] > l)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
long long int upper(int arr[], int n, int r)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    long long int ans = n - 1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] > r)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
void ans(int arr[], int n, int l, int r)
{
    if (l == r)
    {
        cout << 0 << " ";
        return;
    }
    if (r < arr[0] || l > arr[n - 1])
    {
        cout << 0 << " ";
        return;
    }
    if (r == arr[0] || l == arr[n - 1])
    {
        cout << 1 << " ";
        return;
    }

    long long int low = lower(arr, n, l) + 1;
    long long int up = upper(arr, n, r);
    // cout << up << " " << low << endl;
    cout << up - low << " ";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        v.push_back(arr[i]);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        int r;
        cin >> l >> r;
        // ans(arr, n, l, r);

        vector<int>::iterator lower, upper;
        lower = lower_bound(v.begin(), v.end(), l);
        upper = upper_bound(v.begin(), v.end(), r);
        cout << upper - lower << " ";
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
int mini(int arr[], int n)
{
    int mn = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        mn = min(arr[i], mn);
    }
    return mn;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        int mxa = INT_MAX, mxb = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> brr[i];
        }
        long long int ans1 = 0, ans2 = 0;
        sort(arr, arr + n);
        sort(brr, brr + n);
        mxa = mini(arr, n);
        mxb = mini(brr, n);
        int q = n - 1;
        int i = 0, j = 0;
        while (q >= 0)
        {
            ans1 += mxb + arr[i];
            ans2 += mxa + brr[j];
            ++i;
            ++j;
            q--;
        }
        long long int solution = min(ans1, ans2);
        cout << solution << endl;
    }
}
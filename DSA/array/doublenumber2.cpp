#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int ans = 0;
    //----------------------first approach-----------------------------------------
    // for (int i = 0; i < n; i++)
    // {
    //     int temp=arr[i];
    //     for (int j = i ; j <n; j++)
    //     {
    //         if (temp==arr[j])
    //         {
    //             ans = arr[j];
    //         }
    //     }
    // }
    //----------------------second approach--------------------------------------
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     ans = ans ^ arr[i];
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     ans = ans ^ i;
    // }

    //----------------------third approach--------------------------
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }
    cout << sum1 << endl;
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
    ans = n - (sum - sum1);
    cout << "The Double integer present in the array is: " << ans;
}
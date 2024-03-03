#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     long long int n;
    //     cin >> n;
    //     long long int arr[n];
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cin >> arr[i];
    //     }
    //     long long int ans = 0;
    //     for (int i = 1; i < n; ++i)
    //     {
    //         if (arr[i] < arr[i - 1])
    //         {
    //             ans += (arr[i - 1] - arr[i]);
    //             arr[i]=arr[i-1];
    //         }
    //     }
    //     // for (int i = 0; i < n; ++i)
    //     // {
    //     //     cout<< arr[i]<<" ";
    //     // }
    //     cout << ans << endl;
    int n = 9;
    int x=(1<<2)|n;
    int y=(n>>2)&1;
    int z=(1<<1)^n;
    cout<<x;
}

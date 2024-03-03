#include <bits/stdc++.h>
using namespace std;

// bool ans(int arr[], int n)
// {
//     map<int, int> mp;
//     long long int sum1 = 0, sum2 = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         mp[arr[i]]++;
//         sum1 += arr[i];
//     }
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (mp[1] == n)
//     {
//         return 0;
//     }
//     if (mp[1] > n / 2)
//     {
//         sum2 = mp[1] * 2;
//         sum2 += (n - mp[1]);
//         if (sum1 < sum2)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int func(int n, int a, int b, int c)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n < 0)
//     {
//         return -1;
//     }
//     int result = max(func(n - a, a, b, c), func(n - b, a, b, c), func(n - c, a, b, c));

//     if (result == -1)
//     {
//         return -1;
//     }
//     return (result + 1);
// }
int main()
{

    int n, a, b, c;
    cin >> n;
    // cout << func(n, a, b, c);
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    for (auto &x : ord)
        cout << x + 1 << ' ';
    cout << endl;
}

#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     gcd(b, a % b);
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        long int g = arr[0];
        for (auto x : arr)
        {
            g = __gcd(g, arr[x]);
        }
        cout << g << endl;
    }
}
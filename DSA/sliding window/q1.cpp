#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, sum = 0, maxi = 0;
    while (j < n)
    {
        sum += arr[j];
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j < n && i < n && j - i + 1 == k)
        {
            maxi = max(maxi, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    cout << maxi;
}

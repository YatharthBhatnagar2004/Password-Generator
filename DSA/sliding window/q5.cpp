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
    int i = 0, j = 0, ans = 0, sum = 0;
    while (i <= j)
    {
        sum += arr[j];
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            while (sum >= k)
            {
                sum -= arr[i];
                i++;
                if (sum == k)
                {
                    ans = max(j - i + 1, ans);
                }
            }
        }
    }
    cout << ans;
}
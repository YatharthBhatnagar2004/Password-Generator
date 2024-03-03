#include <bits/stdc++.h>
using namespace std;
long long int modulo = 1e9 + 7;
long long int fact(long long int n)
{
    long long int ans = 1;
    for (int i = 2; i <= n; ++i)
    {
        ans *= 1LL;
        ans *= i;
        ans %= modulo;
    }
    return ans;
}
void ans(long long int arr[], long long int n, long long int k)
{
    long long int counteven = 0;
    long long int countodd = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    if (k == 0)
    {
        if (counteven != 0 && countodd != 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            long long int solution = fact(n);
            cout << solution << endl;
            return;
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            if (counteven == countodd)
            {
                long long int a = fact(n / 2);
                a = a * a;
                long long int solution = (1LL * a * 2) % modulo;
                cout << solution << endl;
                return;
            }
            else
            {
                cout << 0 << endl;
                return;
            }
        }
        else
        {
            if (counteven == countodd - 1 || countodd == counteven - 1)
            {
                long long int a = fact(counteven);
                long long int b = fact(countodd);
                long long int solution = (1LL * a * b) % modulo;
                cout << solution << endl;
                return;
            }
            else
            {
                cout << 0 << endl;
                return;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        ans(arr, n, k);
    }
}
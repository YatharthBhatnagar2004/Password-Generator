#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int digit = 0;
    while (k > 0)
    {
        digit = n % 10;
        if (digit != 0)
        {
            n--;
            k--;
        }
        else
        {
            n /= 10;
            k--;
        }
    }
    cout << n;
}
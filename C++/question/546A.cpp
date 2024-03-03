#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int amount = 0;
    for (int i = 1; i <= w; ++i)
    {
        amount += (i * k);
    }
    // int borrow = amount - n;
    if (n>=amount)
        cout << 0;
    else
        cout << amount-n;
}
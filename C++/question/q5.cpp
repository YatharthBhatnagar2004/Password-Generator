#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int k = 0;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int amt = 0;
    cin >> amt;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
        sum2 += arr[i];
    }
    sum2 /= 2;
    sum1 = (sum1 - arr[k]) / 2;
    if (amt == sum1)
    {
        cout << "Bon Appetit";
    }
    else
    {
        int due = 0;
        due = sum2 - sum1;
        cout << due;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[2 * n];
    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> arr[i];
    }
    int count = 0;
    int j = 0;
    while (j < 2 * n)
    {
        if (j + 2 < 2 * n && arr[j] != arr[j + 2])
        {
            count++;
            j += 2;
        }
        else
        {
            j += 2;
        }
    }
    if (count == 0)
        cout << count;
    else
        cout << count + 1;
}

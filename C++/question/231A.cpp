#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    n *= 3;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i += 3)
    {
        if (arr[i] == 1 && arr[i + 1] == 1 || arr[i] == 1 && arr[i + 2] == 1 || arr[i + 1] == 1 && arr[i + 2] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
}

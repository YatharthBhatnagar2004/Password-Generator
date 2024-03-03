#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<int> v;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count1+count0; i < count0 + count1 + count2; i++)
    {
        arr[i] = 2;
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

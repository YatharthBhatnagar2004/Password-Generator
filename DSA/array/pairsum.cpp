#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;
    cout << "Enter the elements of array: ";
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (arr[i] + arr[j] == n)
            {
                cout << arr[i] << " " << arr[j] << endl;
                arr[j] = INT_MAX;
            }
        }
    }
}
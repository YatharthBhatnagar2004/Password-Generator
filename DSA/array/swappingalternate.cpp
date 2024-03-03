#include <bits/stdc++.h>
using namespace std;
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
// void printarr(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    //------SWAPPING ALTERNATE USING CODE----------------------------------
    // int start = 0;
    // int end = 1;
    // int size = sizeof(arr) / sizeof(int);
    // while (end < size)
    // {
    //     swap(arr[start], arr[end]);
    //     start += 2;
    //     end += 2;
    // }
    // cout << "Array after reversing is: ";
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << arr[i] << " ";
    // }
    // printarr(arr, n);
    // swapalternate(arr, n);
    // printarr(arr, n);
}
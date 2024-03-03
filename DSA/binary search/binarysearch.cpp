#include <bits/stdc++.h>
using namespace std;
// int binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
int mid;
int binarysearch(int arr[], int key, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarysearch(arr, key, low, mid - 1);
    }
    else
    {
        return binarysearch(arr, key, mid + 1, high);
    }
}
int main()
{
    int even[6]{2, 4, 6, 8, 12, 13};
    int odd[5]{2, 4, 6, 8, 10};
    int index = binarysearch(odd, 1, 0, 5);
    cout << index;
}
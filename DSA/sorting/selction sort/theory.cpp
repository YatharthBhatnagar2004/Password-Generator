#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5]{64, 25, 12, 22, 11};
    int temp = 0;
    for (int i = 0; i < 4; ++i)
    {
        // int minindex = i;
        for (int j = i + 1; j < 5; ++j)
        {
            if (arr[j] < arr[i])
            {
                // minindex = j;
                // temp = arr[i];
                // arr[i] = arr[j];
                swap(arr[i], arr[j]);
                // arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    // -----------------------DECREASING SORTING-------------------------------------------
    // int arr[5]{1, 2, 3, 4, 5};
    // for (int i = 0; i < 4; ++i)
    // {
    //     int maxindex = i;
    //     for (int j = i + i; j < 5; ++j)
    //     {
    //         if (arr[j] > arr[maxindex])
    //         {
    //             maxindex = j;
    //         }
    //     }
    //     swap(arr[i], arr[maxindex]);
    // }
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]{10, 1, 7, 6, 14, 9};
    //-------------------INCREASING ORDER--------------------------------------
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 6 - i-1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }



//----------DECREASING ORDER---------------------------------------------------
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6 - i-1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
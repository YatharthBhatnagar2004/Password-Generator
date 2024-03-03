// #include <bits/stdc++.h>
// using namespace std;
// void printSubArrays(vector<int> arr, int start, int end, int p, int q)
// {

//     if (end == arr.size())
//         return;

//     else if (start > end)
//         printSubArrays(arr, 0, end + 1,p,q);

//     else
//     {
//         for (int i = start; i < end; i++)
//         {
//             //     cout << arr[i] << ", ";
//             // cout << arr[end] << "]" << endl;
//             if (arr[i] + arr[end] > 0)
//                 p++;
//             else
//                 q++;
//         }
//         printSubArrays(arr, start + 1, end,p,q);
//     }
//     return;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int B[n];
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> B[i];
//         }
//         vector<int> v;
//         for (int i = 0; i < n; ++i)
//         {
//             v.push_back(B[i] * ((pow(2, i))));
//         }
//         int p = 0, q = 0;
//         printSubArrays(v,0,0,0,0);
//         cout<<p<<" "<<q<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
 
// Recursive function to print all possible subarrays for
// given array
void printSubArrays(vector<int> arr, int start, int end,int p,int q)
{
    
    // Stop if we have reached the end of the array
    if (end == arr.size())
        return;
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1,p,q);
    // Print the subarray and increment the starting point
    else {
        cout << "[";
        for (int i = start; i < end; i++)
            cout << arr[i] << ", ";
            if(arr[start]+arr[end]>0) p++;
            else q++;
        cout << arr[end] << "]" << endl;
        printSubArrays(arr, start + 1, end,p,q);
    }
    return;
}
 
int main()
{
    vector<int> arr = { 1, 2, 3 };
    int p=0,q=0;
    printSubArrays(arr, 0, 0,p,q);
    cout<<p<<q;
}
#include <bits/stdc++.h>
using namespace std;

//--------  TO PRINT ALL SUBSEQUENCES-------------------------

// void subsequence(int i,vector<int> &v,int arr[],int n){
//     if(i==n){
//         for(auto it:v){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     v.push_back(arr[i]);
//     subsequence(i+1,v,arr,n);
//     v.pop_back();
//     subsequence(i+1,v,arr,n);
// }

//--------  TO PRINT ALL SUBSEQUENCE HAVING SUM = K ------------------------------------

// void f(int i, vector<int> &v, int n, int arr[], int k, int sum)
// {

//     if (i == n)
//     {
//         if (sum == k)
//         {
//             for (auto x : v)
//             {
//                 cout << x << " ";
//             }
//             cout << endl;
//             return;
//         }
//         return;
//     }

//     v.push_back(arr[i]);
//     sum += arr[i];
//     f(i + 1, v, n, arr, k, sum);

//     v.pop_back();
//     sum -= arr[i];
//     f(i + 1, v, n, arr, k, sum);
// }
// vector<int> v1;
// void subseq(int arr[], int n, int i, int k)
// {
//     if (i >= n)
//     {
//         int sum = 0;
//         sum = accumulate(v1.begin(), v1.end(), 0);
//         if (sum == k)
//         {
//             cout << "{ ";
//             for (auto x : v1)
//             {
//                 cout << x << " ";
//             }
//             cout << "}" << endl;
//             return;
//         }
//         return;
//     }
//     v1.push_back(arr[i]);
//     subseq(arr, n, i + 1, k);
//     v1.pop_back();
//     subseq(arr, n, i + 1, k);
// }
// vector<int> v;
// void combinationsum(int arr[], int n, int k, int i)
// {
//     if (i >= n)
//     {
//         if (k == 0)
//         {
//             cout << "{ ";
//             for (auto x : v)
//             {
//                 cout << x << " ";
//             }
//             cout << "}" << endl;
//             return;
//         }
//         return;
//     }
//     if (arr[i] <= k)
//     {
//         v.push_back(arr[i]);
//         combinationsum(arr, n, k - arr[i], i);
//         v.pop_back();
//     }
//     combinationsum(arr, n, k, i + 1);
// }
// vector<int> v2;
// vector<vector<int>> v3;
// void combinationsum2(int arr[], int n, int k, int ind)
// {
//     if (k == 0)
//     {
//         v3.push_back(v2);
//     }
//     for (int i = ind; i < n; ++i)
//     {
//         if (i > ind && arr[i] == arr[i - 1])
//             continue;
//         if (arr[i] > k)
//             break;
//         v2.push_back(arr[i]);
//         combinationsum2(arr, n, k - arr[i], i + 1);
//         v2.pop_back();
//     }
// }
// vector<int> v4;
// void subsetsum(int arr[], int n, int i, vector<int> &v)
// {
//     if (i >= n)
//     {
//         int sum = 0;
//         sum = accumulate(v4.begin(), v4.end(), 0);
//         v.push_back(sum);
//         return;
//     }
//     v4.push_back(arr[i]);
//     subsetsum(arr, n, i + 1, v);
//     v4.pop_back();
//     subsetsum(arr, n, i + 1, v);
// }
// vector<int> v5;
// void subsetsum2(int arr[], int n, int i, vector<vector<int>> &v)
// {
//     v.push_back(v5);
//     for (int j = i; j < n; ++j)
//     {
//         if (j != i && arr[j] == arr[j - 1])
//         {
//             continue;
//         }
//         v5.push_back(arr[j]);
//         subsetsum2(arr, n, j + 1, v);
//         v5.pop_back();
//     }
// }
// vector<int> v6;
// void permutations(int arr[], int n, int ind, vector<vector<int>> &v)
// {
//     v.push_back(v6);
//     for (int i = ind; i < n; ++i)
//     {
//         v6.push_back(arr[i]);
//         permutations(arr, n, i + 1, v);
//         v6.pop_back();
//     }
// }
int main()
{
    cout<<8/2*(2+2);
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<vector<int>> v;
//     // cout<<0<<" ";
//     permutations(arr, n, 0, v);
//     // sort(v.begin(), v.end());
//     for (auto x : v)
//     {
//         for (auto i : x)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     // combinationsum2(arr, n, 4, 0);
//     // for (auto x : v3)
//     // {
//     //     for (auto it : x)
//     //         cout << it << " ";
//     //     cout << endl;
//     // }
}
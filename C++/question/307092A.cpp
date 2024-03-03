#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> brr[i];
    }
    int i=arr[0];
    cout<<++i;
    // vector<int> v;
    // int i = 0, j = 0;
    // while (i < n && j < m)
    // {
    //     if (arr[i] < brr[j])
    //     {
    //         v.push_back(arr[i]);
    //         i++;
    //     }
    //     else if (brr[j] < arr[i])
    //     {
    //         v.push_back(brr[j]);
    //         j++;
    //     }
    //     else
    //     {
    //         v.push_back(arr[i]);
    //         v.push_back(arr[i]);
    //         i++;
    //         j++;
    //     }
    // }
    // while(i<n){
    //     v.push_back(arr[i]);
    //     ++i;
    // }
    // while(j<m){
    //     v.push_back(brr[j]);
    //     ++j;
    // }
    // for(int i=0;i<v.size();++i)
    // {
    //     cout<<v[i]<<" ";
    // }
}
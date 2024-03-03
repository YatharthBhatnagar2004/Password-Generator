#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    cout << "Enter the size of first array: ";
    cin >> n;
    cout << endl;
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr1[n];
    int arr2[m];
    vector<int> v;
    cout << endl;
    cout << "Enter the elements of first array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Enter the elements of second array: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;
    //--------------------------MY APPROACH---------------------------------------------
    // if (m < n)
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (arr2[i] == arr1[j])
    //             {
    //                 v.push_back(arr2[i]);
    //                 break;
    //             }
    //         }
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if (arr2[j] == arr1[i])
    //             {
    //                 v.push_back(arr1[i]);
    //                 break;
    //             }
    //         }
    //     }
    // }
    // cout << "Intersection of arrays is: ";
    // for (int i = 0; i < v.size(); i++)
    // {
    //      cout << v[i] << " ";
    // }
    //-----------------------------BABBAR'S APPROACH 1-----------------------------
    // for(int i=0;i<n;++i){
    //     int element =arr1[i];
    //     for(int j=0;j<m;++j){
    //         if(element==arr2[j]){
    //             v.push_back(element);
    //             arr2[j]=INT_MIN;
    //             break;
    //         }
    //     }
    // }
    // cout << "Intersection of arrays is: ";
    // if(v.size()==0){
    //     cout<<"-1";
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
        
    //      cout << v[i] << " ";
    // }

       
}
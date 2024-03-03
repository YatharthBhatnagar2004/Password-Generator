#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> doublenumber;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] == arr[j])
            {
                doublenumber.push_back(arr[j]);
            }
        }
    }
    cout<<"ANS is:";
    for (int i = 0; i < doublenumber.size(); i++)
    {
        cout<<doublenumber[i]<<" ";
    }
}   
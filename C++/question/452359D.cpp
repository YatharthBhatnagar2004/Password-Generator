#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int j = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        if(maxi-arr[i]!=0){
            cout<<maxi-arr[i]<<" ";
        }
    }
}
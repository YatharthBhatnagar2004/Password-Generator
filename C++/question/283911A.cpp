#include <bits/stdc++.h>
using namespace std;

bool binarysearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1, mid = low + (high - low) / 2;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            return 1;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    while (t--)
    {
        int k;
        cin>>k;
        if(binarysearch(arr,n,k)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
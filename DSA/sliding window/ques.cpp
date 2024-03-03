#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int sum = 0, maxi = 0;
    int i = 0, j = 0;

    // while (j < n)
    // {
    //     sum += arr[j];
    //     if (j - i + 1 < k)
    //         j++;
    //     else if (j - i + 1 == k)
    //     {
    //         maxi = max(maxi, sum);
    //         sum -= arr[i];
    //         ++i, ++j;
    //     }
    // }

    // cout << maxi << endl;
    // sum=0;
    // int l=0,r=0,ans=0;
    // while(r<n){
    //     sum+=arr[r];
    //     if(sum<=5){
    //         ans=max(ans,r-l+1);
    //     }
    //     while(l<n&&sum>5){
    //         sum-=arr[l];
    //         l++;
    //     }
    //     r++;
    // }
    // cout<<ans;
    list<int> v;

    while (j < n)
    {
        if (arr[j] < 0)
            v.push_back(arr[j]);
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k) 
        {
            cout<<v.front()<<" ";
            j++;i++;
            if(i-1>=0&&arr[i-1]==v.front()){
                v.pop_front();
            }

        }
    }
}
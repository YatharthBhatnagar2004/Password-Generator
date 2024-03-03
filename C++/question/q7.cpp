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
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int frequency[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    // for (int i = 0; i < maxi + 1; i++)
    // {

    //     cout << frequency[i] << endl;
    // }
    int maximum = 0;
    for (int i = 0; i < maxi + 1; i++)
    {
        maximum = max(maximum, frequency[i]);
    }
    vector<int> ans;
    for (int i = 0; i < maxi + 1; i++)
    {
        if (frequency[i] ==maximum)
        {
            ans.push_back(i);
        }
    }
    int mini=INT_MAX;
    for (int i = 0; i < ans.size(); i++)
    {
        mini=min(mini,ans[i]);
    }
    cout<<mini;
}
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
    for (int i = 0; i < n; ++i)
    {
        maxi = max(maxi, arr[i]);
    }
    // cout<<maxi<<endl;
    int frequency[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < maxi + 1; i++)
    {
        if (frequency[i] != 0)
        {
            cout << i << " -> " << frequency[i] << endl;
        }
    }
    cout << endl;

    
}
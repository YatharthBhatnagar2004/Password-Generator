#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int temp = arr[i];
        for (int j = i + 1; j <= n; ++j)
        {
            if (temp == arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            cout << "Unique element is: " << arr[i];
        }
    }

    // cout << endl;
    // int ans=0;
    // for(int i=0;i<n;++i){
    //     ans=ans^arr[i];
    // }
    // cout<<ans;
}
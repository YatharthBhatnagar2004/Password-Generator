#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int v[1001] = {0};
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            v[arr[i]]++;
        }
        bool arr1[1001] = {0};
        bool flag = true;
        for (int i = 0; i < n;)
        {
            int j = i + 1;
            // cout<<i<<" "<<j<<endl;
            if (arr1[j] == 1)
            {
                flag = false;
                break;
            }
            while (j < n && arr[j] == arr[i])
            {
                j++;
            }
                cout << j;
            arr1[arr[i]] = 1;
            i = j;
        }
        cout << endl;
        // sort(v,v+1001);
        // int k = 1;
        // bool flag1 = true;
        // while (k < 1001)
        // {
        //     if (v[k] == v[k - 1])
        //     {
        //         flag1 = false;
        //         k++;
        //     }
        //     else
        //     {
        //         k++;
        //     }
        // }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
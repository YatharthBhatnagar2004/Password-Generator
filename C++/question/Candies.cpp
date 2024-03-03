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
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        int maxi = arr[0];
        for (int i = 0; i < 2*n; ++i)
        {
            maxi = max(maxi, arr[i]);
        }
        
        int frequency[maxi + 1]={0};
        for (int i = 0; i < 2*n; ++i)
        {
            frequency[arr[i]]++;
        }
        int count = 0;
        for (int i = 0; i < maxi + 1; ++i)
        {
            
            if (frequency[i] >= 3)
            {
                count++;
            }
        }
        if (count == 0)
            cout << "Yes" << endl;
        else{
            cout << "No" << endl;
        }
    }
}
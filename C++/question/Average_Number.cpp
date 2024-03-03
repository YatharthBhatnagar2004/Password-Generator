#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k, v;
        cin >> n >> k >> v;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int kvalue = 0.0;
        kvalue = (v * (n + k) - sum);
        if (kvalue%k==0&&kvalue/k>0){
            cout<<kvalue/k<<endl;
        }else{
            cout<<-1<<endl;
        }
        // cout << kvalue;
        // if (ceil(kvalue) == floor(kvalue))
        // {
        //     if (kvalue >= 0)
        //     {
        //         cout << kvalue << endl;
        //     }
        //     else
        //     {
        //         cout << -1 << endl;
        //     }
        // }
        // else
        // {

        //     cout << -1 << endl;
        // }
    }
}
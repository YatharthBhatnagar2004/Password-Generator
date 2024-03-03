#include <bits/stdc++.h>
using namespace std;

int main()
{
    // prefix sum in 1-d array
    // int n;
    // cin >> n;
    // int arr[n];
    // int pf[n];
    // for (int i = 1; i <= n; ++i)
    // {
    //     cin >> arr[i];
    //     pf[i]=pf[i-1]+arr[i];
    // }
    // int l, r;
    // cin >> l >> r;
    // cout<<pf[r]-pf[l-1]<<endl;
    // for(int i=0;i<n;++i)
    // {
    //     cout<<pf[i]<<" ";
    // }

    int n;
    cin >> n;
    int arr[n][n];
    int pf[n][n];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++i)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<pf[c][d]-pf[c][b-1]-pf[a-1][d]+pf[a-1][b-1]<<endl;



}

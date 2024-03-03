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
        int m;
        vector<vector<int>> arr(n);
        vector<int> v;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            for (int j = 0; j < m; ++j)
            {
                int a;
                cin >> a;
                arr[i].push_back(a);
                mn = min(mn, arr[i][j]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            sort(arr[i].begin(), arr[i].end());
        }
        for (int i = 0; i < n; ++i)
        {
            v.push_back(arr[i][1]);
        }
        // for(auto x:v){
        //     cout<<x<<" ";
        // }cout<<endl;
        sort(v.begin(),v.end());
        long long int sum=0;
        sum+=mn;
        for(int i=1;i<v.size();++i)
        {
           sum+=v[i]; 
        }
        cout<<sum<<endl;
        // for (int  i = 0; i < n; i++)
        // {
        //     for(int j=0;j<arr[i].size();++j){
        //         cout<<arr[i][j]<<" ";
        //     }cout<<endl;
        // }
    }
}
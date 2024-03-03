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
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            if(arr[i]%2==0){
                v.push_back(arr[i]);
            }
        }
        // sort(v.begin(),v.end(),greater<int>());
        for (int i = 0; i < n; ++i)
        {
            if(arr[i]%2!=0){
                v.push_back(arr[i]);
            }
        }
        // for(int i=0;i<v.size();++i)
        // {
        //     cout<<v[i];
        // }
        int count = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (__gcd(v[i], 2 * v[j]) > 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
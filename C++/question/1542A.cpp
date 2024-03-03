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
        int arr[2*n];
        map<int, int> mp;
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int count1 = 0, count2 = 0;
        for (auto x : mp)
        {
            if (x.first % 2 == 0)
            {
                count1 += x.second;
            }
            else
            {
                count2 += x.second;
            }
        }
        if(count1==count2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
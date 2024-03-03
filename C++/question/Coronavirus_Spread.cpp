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
            cin >> arr[i];
        vector<int> hash;

        for (int i = 0; i < n - 1; ++i)
        {
            hash.push_back(arr[i + 1] - arr[i]);
        }
        int v[6] = {0};
        int i = 0;
        int k = 0;
        while (i < hash.size())
        {
            if (hash[i] < 3)
            {
                v[k]++;
                i++;
            }
            if (hash[i] >= 3)
            {
                k++;
                i++;
            }
        }
        
        sort(v, v + 6, greater<int>());
        int best = 0;
        int worst = 0;
        worst = v[0];
        if (v[1] == 0)
            best = 0;
        else
        {
            sort(v, v + 6);
            if (v[1] != 0)
                best = v[1];
            else if (v[2] != 0)
                best = v[2];
            else if (v[3] != 0)
                best = v[3];
            else
                best = v[4];
        }
        cout<<best+1<<" "<<worst+1<<endl;
    }
}
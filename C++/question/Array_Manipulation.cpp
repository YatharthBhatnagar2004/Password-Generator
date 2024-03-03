#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N] = {0};

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int cnt = 0;
    while (m--)
    {
        map<char, int> mp;
        int l, r;
        cin >> l >> r;
        for (int i = l; i <= r; ++i)
        {
            mp[s[i]]++;
        }
        cnt = 0;
        for (auto x : mp)
        {
            if (x.second % 2 != 0)
                cnt++;
        }
        if (cnt > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
// long long int maxi = -1;
// while (m--)
// {
// int a, b, k;
// cin >> a >> b >> k;
// arr[a] += k;
// arr[b + 1] -= k;
// }
// for (int i = 1; i <= n; ++i)
// {
//     arr[i]+=arr[i-1];
// }
// for(int i=1;i<=n;++i)
// {
//     if(maxi<arr[i]){
//         maxi=arr[i];
//     }
// }
// cout << maxi << endl;
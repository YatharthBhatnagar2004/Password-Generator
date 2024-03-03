#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, count = 0, cnt =0;
    long long ans=0;
    while (i < n && j < m)
    {
        while(i<n&&j<m&&a[i]>b[j]){j++;}
        while (j<m&&i<n&&a[i] == b[j])
        {
            count++;
            j++;
        }
        i++;
        cnt=1;
        while (i< n && a[i] == a[i - 1])
        {
            cnt++;
            i++;
        }
        // cout<<cnt<<" "<<count<<endl;
        ans += 1LL*count * cnt;
        cnt = 0;
        count = 0;

    }
    cout << ans;
}
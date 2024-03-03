#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int w, h, n;
    cin >> w >> h >> n;
    long long int start = max(w,h), end = min(n*w*1LL,n*h*1LL);
    long long int mid = start + (end - start) / 2;
    long long int ans=start;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // cout<<mid<<endl;
        long long int a = mid / w;
        long long int b = mid / h;
        if (a * b * 1LL < n)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans << endl;
}

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
        int ans = INT_MAX;
        while (n--)
        {
            int d, s;
            cin >> d >> s;
            if(s%2==0){
                s-=2;
            }
            // cout<<s<<endl;
            ans = min(ans, d + s / 2);
        }
        cout << ans<<endl;
    }
}

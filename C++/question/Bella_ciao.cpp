#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        long long ans = 0, i = 0;
        
        int n = D / d;
        
        
        D %= d;
        
        ans += (P + i * Q) * D;

        cout << ans << endl;
    }
}
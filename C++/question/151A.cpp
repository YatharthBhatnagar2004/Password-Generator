#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a,b,e,ans;
    a=(k*l)/nl;
    b=c*d;
    e=p/np;
    ans=min(b,e);
    ans=min(a,ans)/n;
    cout<<ans;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int mx,mn;
    mx=max(x1,x2);
    mn=min(x1,x2);
    mn=min(mn,x3);
    mx=max(mx,x3);
    cout<<mx-mn;
}

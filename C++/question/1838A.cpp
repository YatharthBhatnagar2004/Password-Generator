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
        int mx=0,mn=0;
        for(int i=0;i<n;++i)
        {
            int x;cin>>x;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        if(mn<0) cout<<mn<<endl;
        else cout<<mx<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, ans = 0;
        cin >> a >> b >> c;
        if (a > b)
        {
            while (a - b > c)
            {
                ans++;
                a -= c;
                b += c;
            }
            if (a == b)
            {
                cout << ans << endl;
            }
            else if(b>a)
                cout << ans << endl;
            else{
                cout<<ans+1<<endl;
            }
        }
        else if (b > a)
        {
            while (b - a > c)
            {
                ans++;
                a += c;
                b -= c;
            }
            if (a == b)
            {
                cout << ans << endl;
            }
            else if(a>b)
                cout << ans << endl;
            else{
                cout<<ans+1<<endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
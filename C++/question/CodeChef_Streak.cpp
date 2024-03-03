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
        int a[n], o[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> o[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int cnt1 = 0, cnt2 = 0;
        int i = 0, j = 0, x = 0, y = 0;
        while (i < n)
        {
            while (i < n && o[i] != 0)
            {
                cnt1++;

                i++;
            }

            if (cnt1 > x)
            {
                x = cnt1;
                cnt1 = 0;
            }
            else
            {
                cnt1 = 0;
            }

            i++;
        }
        while (j < n)
        {

            while (j < n && a[j] != 0)
            {
                cnt2++;

                j++;
            }

            if (cnt2 > y)
            {
                y = cnt2;
                cnt2 = 0;
            }
            else
            {
                cnt2 = 0;
            }

            j++;
        }
        if(x>y) cout<<"Om"<<endl;
        else if(x<y) cout<<"Addy"<<endl;
        else cout<<"Draw"<<endl;
    }
}
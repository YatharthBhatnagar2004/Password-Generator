#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, g, b;
        cin >> r >> g >> b;
        int k;
        cin >> k;
        int temp = 0;
        if (k <= r)
        {
            temp += (k - 1);
        }
        else
        {
            temp += r;
        }
        if (k <= g)
        {
            temp += (k - 1);
        }
        else
        {
            temp += g;
        }
        if (k <= b)
        {
            temp += (k - 1);
        }
        else
        {
            temp += b;
        }
        cout<<temp+1<<endl;
    }
}
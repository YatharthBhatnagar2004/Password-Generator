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
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            int a, b;
            cin >> a >> b;
            if (b < a)
                count++;
        }
        cout<<count<<endl;
    }
}
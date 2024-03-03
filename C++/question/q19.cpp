#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    char v[n];
    memset(v, 'o', sizeof(v));

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == 1)
        {
            cout<<"#";
            if (v[i] == 'o')
            {
                v[i + 1] = 'e';
            }
            else if (v[i] == 'e')
            {
                v[i + 1] = 'o';
            }
        }
        else
        {
            v[i+1] = v[i];
        }
        cout << b[i] << " " << v[i] << " " << v[i + 1] << " " << i << endl;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }

}
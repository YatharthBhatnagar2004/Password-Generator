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
        // cout << n * 0.2;
        cout << ceil(100.0 / (n * 0.2)) << endl;
    }
}
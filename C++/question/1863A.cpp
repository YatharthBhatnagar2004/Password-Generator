#include <bits/stdc++.h>
using namespace std;
void ans(int n, int a, int q, string s)
{
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < q; ++i)
    {
        if (s[i] == '+')
        {
            count++;
        }
        else
        {
            count1++;
        }
        if (a + count - count1 >= n)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (a >= n)
    {
        cout << "YES" << endl;
        return;
    }
    if (a + count < n)
    {
        cout << "NO" << endl;
        return;
    }
    if (a + count - count1 >= n)
    {
        cout << "YES" << endl;
        return;
    }
    if (a + count - count1 < n)
    {
        cout << "MAYBE" << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        ans(n, a, q, s);
    }
}
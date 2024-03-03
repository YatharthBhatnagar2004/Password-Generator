#include <bits/stdc++.h>
using namespace std;
long long int modulo = 1e9 + 7;
void ans1(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            cout << 0 << endl;
            return;
        }
    }
    long long int solution = 1;
    for (int i = 0; i < v.size(); i++)
    {
        solution *= v[i];
        solution %= modulo;
    }
    cout << solution << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long int ans = 0;
        vector<int> v;
        for (int i = 2; i < n; i += 2)
        {
            if ((s[i - 1] == '0' && s[i - 2] == '1' || s[i - 2] == '0' && s[i - 1] == '1') && s[i] == '1')
            {
                ans += 2;
            }
            else if ((s[i - 1] == '1' && s[i - 2] == '1') && s[i] == '1')
            {
                ans += 2;
            }
            else if ((s[i - 1] == '0' && s[i - 2] == '1' || s[i - 2] == '0' && s[i - 1] == '1') && s[i] == '0')
            {
                ans += 1;
            }
            else if ((s[i - 1] == '1' && s[i - 2] == '1') && s[i] == '0')
            {
                ans += 1;
            }
            else if ((s[i - 1] == '0' && s[i - 2] == '0') && s[i] == '0')
            {
                ans += 3;
            }
            else if (s[i - 1] == '0' && s[i - 2] == '0' && s[i] == '1')
            {
                ans = 0;
                v.push_back(ans);
                break;
            }
            v.push_back(ans);
            ans = 0;
        }
        ans1(v);
    }
}
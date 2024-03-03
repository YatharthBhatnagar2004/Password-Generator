#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[s[i]]++;
    }
    char c;
    int odd = 0;
    for (auto x : mp)
    {
        if (x.second & 1)
        {
            c = x.first;
            odd++;
        }
    }
    if (odd == 1 && n & 1)
    {
        string s1, s2;
        for (auto x : mp)
        {
            string s(x.second / 2, x.first);
            s1 += s;
            s2 = s + s2;
        }
        cout << s1 + c + s2 << endl;
    }
    else if (n % 2 == 0 && odd == 0)
    {
        string s1, s2;
        for (auto x : mp)
        {
            string s(x.second / 2, x.first);
            s1 += s;
            s2 = s + s2;
        }
        cout << s1 + s2 << endl;
    }
    else
    {
        cout << "NO SOLUTION";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> s >> k;
    int count = 0;
    int i = 0, j = 0, mx = 0, n = s.size();
    unordered_map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        if (mp.size() < k)
        {
            j++;
        }
        else if (mp.size() == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                if (mp.size() == k)
                {
                    mx = max(mx, j - i + 1);
                }
                i++;
            }
        }
    }
    // bool z=true or false;
    // cout << z;
}
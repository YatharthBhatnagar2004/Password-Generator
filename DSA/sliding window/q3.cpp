#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s, s1;
    cin >> s >> s1;
    int k = s1.size();
    unordered_map<char, int> mp;
    int i = 0, j = 0, count = 0, ans = 0,n=s.size();
    for(auto &x:s1){
        mp[x]++;
    }
    count=mp.size();
    while (j < n)
    {
        if (mp.find(s[j])!=mp.end())
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                count--;
            }
        }
        if (j - i + 1 < k)
        {
            j++;
        }else if (j - i + 1 == k)
        {

            if (count == 0)
            {
                ans++;
            }
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[i]] == 1)
                {
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    cout << ans;
}

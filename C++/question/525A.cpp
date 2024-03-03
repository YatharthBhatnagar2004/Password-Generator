#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int j = 1, i = 0;
    int cnt = 0;
    while (i < s.length() && j < s.length())
    {
        mp[s[i]]++;
        if (mp.find(s[j]) != mp.end() && mp[s[j]] > 0)
        {
            mp[s[j]]--;
            i += 2;
            j += 2;
        }
        else
        {
            cnt++;
            // cout<<cnt<<" ";
            // for(auto x:mp){
            //     cout<<x.first<<" "<<x.second<<endl;
            // }
            i += 2;
            j += 2;
        }
    }
    cout << cnt;
}
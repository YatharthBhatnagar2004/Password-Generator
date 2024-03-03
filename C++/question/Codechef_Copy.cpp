#include <bits/stdc++.h>
using namespace std;
string ans(string s)
{
    int i = 0, j = 0, k = 0;
    string s1;
    vector<int> v;
    string s2 = "codechef";
    map<char,int>mp;
    for (int i = 0; i < 8; i++)
    {
        mp[s[i]]++;
    }
    if(mp.size()==1){
        if(s[0]=='c'||s[0]=='o'||s[0]=='d'||s[0]=='e'||s[0]=='h'||s[0]=='f')
        return "-1";
    }
    
    while (i < 8)
    {
        if (s[i] != s2[j])
        {
            s1.push_back(s[i]);
            ++i;
            ++j;
        }
        else
        {
            v.push_back(i);
            ++i;
        }
    }
    if (v.size() != 0)
    {
        j = 8 - v.size();
        int i=0;
        while (i < v.size())
        {
            if (s[v[i]] != s2[j])
            {
                s1.push_back(s[i]);
                ++i;
                ++j;
            }
            else
            {
                v.push_back(i);
                ++i;
            }
        }
    }
    // cout<<s1;
    // for(int i=0;i<v.size();++i)
    // {
    //     cout<<v[i];
    // }
    return s1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << ans(s)<<endl;
    }
}
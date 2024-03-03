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
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        mp[s[0]] = '2';
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (mp[s[i]] != '2')
                {
                    mp[s[i]] = '2';
                }
            }
            else
            {
                if (mp[s[i]] != '1')
                {
                    mp[s[i]] = '1';
                }
            }
        }
        string s1;
        for (int i = 0; i < n; i++)
        {
            s1.push_back(mp[s[i]]);
        }
        // cout << s1 << endl;
        string s2;
        for (int i = 0; i < n / 2; i++)
        {
            s2.push_back('2');
            s2.push_back('1');
        }
        if (n % 2 != 0)
        {
            s2.push_back('2');
        }
        // cout<<s1<<" "<<s2<<endl;
        if(s2==s1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
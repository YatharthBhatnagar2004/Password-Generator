#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;
        string s;
        for (int i = 0; i < 8; ++i)
        {
            if(s1[i]!='.'){
                s.push_back(s1[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s2[i]!='.'){
                s.push_back(s2[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s3[i]!='.'){
                s.push_back(s3[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s4[i]!='.'){
                s.push_back(s4[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s5[i]!='.'){
                s.push_back(s5[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s6[i]!='.'){
                s.push_back(s6[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s7[i]!='.'){
                s.push_back(s7[i]);
            }
        }
        for (int i = 0; i < 8; ++i)
        {
            if(s8[i]!='.'){
                s.push_back(s8[i]);
            }
        }
        cout << s << endl;
    }
}
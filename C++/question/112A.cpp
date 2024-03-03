#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (65 <= s1[i] && s1[i] <= 90)
        {
            s1[i] += 32;
        }
        // count1 += s1[i];
        if (65 <= s2[i] && s2[i] <= 90)
        {
            s2[i] += 32;
        }
    }
    bool check =true;
    int i = 0;
    while (i < n)
    {
        if (s1[i] > s2[i])
        {
            check=false;
            cout << 1;
            break;
        }
        if (s1[i] < s2[i])
        {
            check=false;
            cout << -1;
            break;
        }
        if (s1[i] == s2[i])
        {
            check=true;
            ++i;
        }
    }
    if(check==true) cout<<0;
}
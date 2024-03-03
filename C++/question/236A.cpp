#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> hash;
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        hash[s[i]]++;
    }
    int count = 0;
    for (auto it : hash)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
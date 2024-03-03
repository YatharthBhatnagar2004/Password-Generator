#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    if (s[0] == '9')
    {
        i++;
    }
    for (i; i < s.length(); ++i)
    {
        int x = s[i];
        if (x == 53)
        {
            s[i] = char(x - 1);
        }
        else if (x == 54)
        {
            s[i] = char(x - 3);
        }
        else if (x == 55)
        {
            s[i] = char(x - 5);
        }
        else if (x == 56)
        {
            s[i] = char(x - 7);
        }
        else if (x == 57)
        {
            s[i] = char(x - 9);
        }
    }
    cout << s;
}
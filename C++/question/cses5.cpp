#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int maxi = 1;
    int count = 1;
    char c = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
            count = 1;
            c = s[i];
        }
    }
    maxi = max(count, maxi);
    cout << maxi << endl;
}

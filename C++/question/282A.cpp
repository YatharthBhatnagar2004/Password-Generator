#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int count = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if(s.at(1)=='+') count++;
        else count--;
    }
    cout<<count;
}
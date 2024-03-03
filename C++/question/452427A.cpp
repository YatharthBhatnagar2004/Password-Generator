#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.length(); ++i)
    {
        int x = s1[i];
        sum1 += x;
    }
    for (int i = 0; i < s2.length(); ++i)
    {
        int x = s2[i];
        sum2 += x;
    }
    if(sum1>sum2){
        cout<<1<<endl;
    }else if(sum1<sum2){
        cout<<-1<<endl;
    }else cout<<0<<endl;
}
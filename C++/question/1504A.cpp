#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}
bool palindrome(string s)
{
    string s3 = s;
    reverseStr(s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=s3[i]){
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1 = s, s2 = s;
        s1.push_back('a');
        s2.insert(0, "a");
        bool flag1=1,flag2=1;
        flag1=palindrome(s1);
        flag2=palindrome(s2);
        if(flag1==0){
            cout<<"YES"<<endl;
            cout<<s1<<endl;
        }else if(flag2==0){
            cout<<"YES"<<endl;
            cout<<s2<<endl;
        }else if(flag1==1&&flag2==1){
            cout<<"NO"<<endl;
        }
    }
}
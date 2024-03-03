#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s,s1;
        cin >> s;
        s1=s;
        sort(s1.begin(),s1.end());
        int a;
        for(int i=0;i<s.length();++i){
            if(s[i]==s1[0]){
                a=i;
                break;
            }
        }
        s.erase(s.begin()+a);
        cout<<s1[0]<<" "<<s<<endl;
        

    }
}
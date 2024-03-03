#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=1;
        char c;
        vector<char>v;
        while(i<n){
            c=s[i];
            v.push_back(s[i]);
            while(s[j]!=c){
                j++;
            }
            i=j+1;
            j+=2;
        }
        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
    }
}
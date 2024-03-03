#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>hash;
    for (int i = 0; i < n; ++i)
    {
        hash[s[i]]++;
    }
    // cout<<hash['A']<<" "<<hash['D'];
    if(hash['A']>hash['D']){
        cout<<"Anton";
    }else if(hash['A']<hash['D']){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}
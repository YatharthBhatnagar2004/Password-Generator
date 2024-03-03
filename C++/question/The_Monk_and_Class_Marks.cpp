#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, multiset<string>> mp;

    while (n--)
    {
        int x;
        string s;
        cin >> s >> x;
        mp[x].insert(s);
    }
    auto last=(--mp.end());

    while(true)
    {
        auto &stud=(*last).second;
        int marks=(*last).first;
        for(auto it:stud){
            cout<<it<<" "<<marks<<endl;
        }
        if(last==mp.begin()){
            break;
        }
        last--;
    }
}
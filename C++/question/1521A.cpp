#include <bits/stdc++.h>
using namespace std;
vector<long long int>ans(long long int a, long long int b){
    vector<long long int>v;
    if(b==1){
        v.push_back(-1);
        return v;
    }else{
        v.push_back(1LL*a*b*2);
        v.push_back(a);
        v.push_back(1LL*a*(2*b-1));
        return v;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a,b;
        cin >> a>>b;
        vector<long long int>v=ans(a,b);
        if(v.size()==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            sort(v.begin(),v.end());
            cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        }
    }
}
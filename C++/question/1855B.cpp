#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,ans=0,count=0;
        cin >> n;
        vector<long long int>v;
        for(int i=1;i<1000;++i){
            if(i>n/i){
                break;
            }
            if(n%i==0){
                v.push_back(i);
                v.push_back(n/i);
            }

        }
        sort(v.begin(),v.end());
        for(int i=1;i<=v.size();++i)
        {
            // cout<<v[i]<<" ";
            if(v[i]-v[i-1]==1){
                count++;
            }else{
                ans=max(ans,count);
                count=0;
            }
        }cout<<ans+1<<endl;
        
    }
}
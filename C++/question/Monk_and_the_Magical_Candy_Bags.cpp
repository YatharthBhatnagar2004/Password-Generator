#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long ans=0;
        multiset<long long>st;
        for(int i=0;i<n;++i)
        {
            long long x;
            cin>>x;
            st.insert(x);
        }
        while(k--){
            auto it=(--st.end());
            ans+=(*it);
            st.insert((*it)/2);
            st.erase(it);
        }
        cout<<ans<<endl;
    }
}
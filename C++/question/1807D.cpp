#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin >> n>>q;
        int arr[n];
        int pre[n]={0};
        for(int i=1;i<=n;++i)
        {
            cin>>arr[i];
            pre[i]=pre[i-1]+arr[i];
        }
        // for(int i=1;i<=n;++i)
        // {
        //     cout<<pre[i]<<" ";
        // }cout<<endl;
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int sum=pre[n]-pre[r]+pre[l-1];
            sum+=(r-l+1)*k;
            if(sum&1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
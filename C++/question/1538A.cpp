#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        int maxi=0,mini=n+1;
        int a,b,x,y,z;
        for(int i=0;i<n;++i)
        {
            if(arr[i]>maxi){
                maxi=arr[i];
                a=i;
            }

            if(arr[i]<mini){
                mini=arr[i];
                b=i;
            }
        }
        if(a>b){
            x=(n-a)+(b+1);
            y=(b+1)+(a-b);
            z=(n-a)+(a-b);
        }else{
            x=(n-b)+(a+1);
            y=(a+1)+(b-a);
            z=(n-b)+(b-a);
        }
        vector<int>v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        int ans=INT_MAX;
        for(int i=0;i<v.size();++i)
        {
            ans=min(ans,v[i]);
        }
        // cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<ans<<endl;
    }
}
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
            map<int,int>mp;
            for(int i=0;i<n;++i)
            {
                cin>>arr[i];
                mp[arr[i]]++;
            }
            int maxcount=0,count=0;;
            for(auto x:mp){
                if(x.second>count){
                    maxcount=x.first;
                    count=x.second;
                }
            }
            cout<<n-count<<endl;
        }
    }
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
            map<int ,int>mp;
            int maxi=INT_MIN;
            for(int i=0;i<n;++i)
            {
                cin>>arr[i];
                mp[arr[i]]++;
            }
            vector<int>b,c;
            sort(arr,arr+n);
            if(mp[arr[0]]==n){
                cout<<-1<<endl;
            }else{
                for(int i=0;i<mp[arr[n-1]];++i){
                    c.push_back(arr[n-1]);
                }
                
                for (int  i = 0; i < n-mp[arr[n-1]]; i++)
                {
                    b.push_back(arr[i]);
                }
                cout<<b.size()<<" "<<c.size()<<endl;
                for(int i=0;i<b.size();++i)
                {
                    cout<<b[i]<<" ";
                }
                cout<<endl;
                for(int i=0;i<c.size();++i)
                {
                    cout<<c[i]<<" ";
                }
                cout<<endl;

            }
        }
    }
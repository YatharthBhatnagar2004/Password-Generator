#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<int> v(n, 0);
        int mn = INT_MAX;
        stack<int> s;
        s.push(0);
        v[0]=-1;
        for (int i = 1; i < n; i++)
        {
             while(!s.empty()&&a[i]<a[s.top()]) s.pop();
             if(!s.empty()){
                v[i]=s.top();
             }else{
                v[i]=-1;
             }
             s.push(i);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != -1){
                int val=0;
                int j=v[i];
                while(j!=-1){
                    j=v[j];
                    val++;
                }
                if(val==1) cnt++;
            // cout<<v[i]<<" ";
            }
        }
        cout << cnt << endl;
    }
}
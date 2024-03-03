#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        long long sum1=0,sum2=0;
        for(int i=0;i<m;++i)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }
        sum2=((n)*(n+1))/2;
        cout<<sum2-sum1<<endl;
        int sim=0;
        
    }
}
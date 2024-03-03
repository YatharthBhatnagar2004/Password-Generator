#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int difference=abs(a-b);
        long long ans=0;
        if(a==b){
            cout<<0<<endl;
        }else{
            ans=1LL*difference/10;
            if(difference%10==0){
                cout<<ans<<endl;
            }else{
                cout<<ans+1<<endl;
            }
        }
    }
}
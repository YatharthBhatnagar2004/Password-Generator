#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int sum=0;
        sum=1LL*a+1LL*b*2+1LL*c*3;
        if(sum%2==0){
            cout<<0<<endl;
        }else cout<<1<<endl;
    }
}
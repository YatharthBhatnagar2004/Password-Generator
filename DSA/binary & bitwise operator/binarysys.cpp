#include <bits/stdc++.h>
using namespace std;
int main()
{
    //------------APPROACH 1------------------
    // int n=0;
    // cin>>n;
    // float ans=0;
    // int remainder=0;
    // int i=0;
    // while (n!=0)
    // {
    //     remainder=n%2;
    //     ans=(remainder*pow(10,i))+ans;
    //     n=n/2;
    //     ++i;
    // }
    // cout<<ans;
    //------------APPROACH 2------------------
    // int n = 0;
    // cin >> n;
    // float ans=0 ;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;        
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "ANSWER is " << ans;
    //--------------[-ve integer to binary]-----------------------
    int n=0;
    cin>>n;
    n=n*(-1);
    float ans=0;
    int i=0;
    while (n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        ++i;
    }
    int ans1=ans;
    int newans=(~ans1);
    newans=newans+1;
    cout<<newans;
    //--------------[binary to decimal]-----------------------------
    // int n=0;
    // cin>>n;
    // float ans=0;
    // int i=0;
    // while(n!=0){
    //     int digit=n%10;
    //     if (digit==1){
    //         ans=pow(2,i)+ans;
    //     }
    //     n=n/10;
    //     ++i;
    // }
    // cout<<ans;
            
}
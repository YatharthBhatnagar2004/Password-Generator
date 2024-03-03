#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int m,k,ak,a1,left=0,coins=0;
        cin >> m>>k>>a1>>ak;
        if(ak*k+a1==m){
            cout<<0<<endl;
        }else if((1LL*ak*k)+a1<m){
            left=m-((1LL*ak*k)+a1);
            coins+=left/k;
            coins+=(left-(coins*k));
            cout<<coins<<endl;
        }else{

        }
    }
}
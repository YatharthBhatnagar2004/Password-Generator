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
        int rows=0,col=0;
        col=n/2;
        rows=m/2;
        col=col*m;
        if(m%2!=0) rows++;
        if(n%2==0){
            cout<<col<<endl;
        }else{
            cout<<col+rows<<endl;
        }
    }
}
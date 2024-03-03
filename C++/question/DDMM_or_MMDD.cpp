#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin>>s;
        int n1=0,n2=0;
        
        n1=(s[0]-48)*10+(s[1]-48);
        n2=(s[3]-48)*10+(s[4]-48);
        
        if(n1<=12&&n2<=12){
            cout<<"BOTH"<<endl;
        }else if(n1<=12&&n2>12){
            cout<<"MM/DD/YYYY"<<endl;
        }else if(n2<=12&&n1>12){
            cout<<"DD/MM/YYYY"<<endl;
        }
    }
}
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
        string s;
        cin >> s;
        int i=0,j=0,cnt=0;
        bool flag=true;
        vector<int> v;
        char a='m',b='M';
        while(i<n){
            bool z=false;
            while(i<n&&(s[i]==a||s[i]==b)){
                i++;
                z=true;
            }
            if(z){
                cnt++;
                if(cnt==1){
                    a='e';
                    b='E';
                }else if(cnt==2){
                    a='o';
                    b='O';
                }else if(cnt==3){
                    a='w';
                    b='W';    
                }
            }else{
                flag=false;
                break;
            }
        }
        // cout<<cnt<<" ";
        if(flag&&cnt==4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
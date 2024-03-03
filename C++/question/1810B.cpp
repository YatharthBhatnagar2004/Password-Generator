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
        if (n % 2 == 0){
            cout << -1 << endl;
            continue;   
        }
        vector<int>v;
        int digit=0;
        while(n>1){
            n/=2;
            if(n%2!=0){
                v.push_back(2);
            }else{
                n+=1;
                v.push_back(1);
            }
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1;i>=0;--i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, h;
        cin >> x >> h;
        if(h<=5*(x/2)){
            cout<<ceil(h/(x/2))<<endl;
        }else{
            cout<<ceil((h-5*(x/2))/x)+5<<endl;
        }
    }
}
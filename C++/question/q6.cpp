#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int jump = 0;
    cin >> jump;
    int hurdles[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> hurdles[i];
    }
    int maxi = hurdles[0];
    for (int i = 0,j=1; i < n,j<n; i++,j++)
    {
        if(hurdles[i]>maxi){
            maxi=hurdles[i];
        }
    }
    if (jump > maxi)
    {
        cout << "0";
    }
    else
    {
        cout << maxi - jump;
    }
}
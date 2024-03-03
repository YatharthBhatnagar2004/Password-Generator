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
        int arr[n];
        int lowest=0;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            if(arr[i]<arr[lowest]){
                lowest=i;
            }
        }
        arr[lowest]+=1;
        int prod=1;
        for(int i=0;i<n;++i)
        {
            prod*=arr[i];
        }
        cout<<prod<<endl;
    }
}
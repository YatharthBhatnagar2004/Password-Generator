#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int count=0;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(arr[i]>h)count++;
    }
    cout<<(n-count)+count*2;
}
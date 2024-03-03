#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;++i)
    {
        cin>>b[i];
    }
    vector<int>v;
    int count=0,j=0,i=0;
    while (j<m&&i<n)
    {
        if(a[i]<b[j]){
            i++;
        }else{
            v.push_back(i);
            j++;
        }      
    }
    while (j<m)
    {
        v.push_back(i);
        j++;
    }
    
    for (auto x:v)
    {
        cout<<x<<" ";
    }
    
    
}
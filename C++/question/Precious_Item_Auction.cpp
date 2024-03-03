#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k;
	    cin>>n>>k;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long max=0,min=0;
	    for(int i=0;i<k;i++)
	    {
	        max+=a[n-2-2*i];
	    }
	    for(int i=0;i<k-1;i++)
	    {
	        min+=a[i];
	    }
	    if(k!=1)
	    min+=a[n-k-2];
	    else
	    min+=a[n-2];
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
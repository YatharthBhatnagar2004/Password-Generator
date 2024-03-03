#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-x]-1<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
int eligible(int age[],int size){
    int count=0;
    for(int i=0;i<size;++i){
        if(age[i]<=60&&age[i]>=10){
            count++;
        }
    }
    return count;
}

int main() {
	int t=0;
	cin>>t;
	while(t>0){
	    int n=0;
	    cin>>n;
	    int age[n];
	    for(int i=0;i<n;++i){
	        cin>>age[i];
	    }
	    cout<<eligible(age,n)<<endl;
	    t--;
	}
}
#include <bits/stdc++.h>
using namespace std;
void check(int n)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }

    }
    if(count==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int sum(int n){
    int ans=((n)*(n+1))/2;
    return ans;
}
int f(int n){
    if(n<2){
        return n;
    }
    return f(n-1)+f(n-2);
}


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool check=true;
    string s1=s;
    for(int i=0;i<n/2;++i ){
        swap(s1[i],s[n-i-1]);
    }
    if(s1==s) cout<<"YES";
    else cout<<"NO";
}
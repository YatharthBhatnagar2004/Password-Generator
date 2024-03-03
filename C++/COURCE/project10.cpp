#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length()-1,r=s.length()-1,cnt=0;
    // vector<vector<string>> v;
    while(l>=0&&r<=2*s.length()-1){
        for(int i=0;i<l;i++){
           cout<<" ";
        }
        for(int i=0;i<=cnt;i++){
            cout<<s[i];
        }
        for(int i=cnt-1;i>=0;i--){
            cout<<s[i];
        }
        for(int i=0;i<l;i++){
            cout<<" ";
        }
        cnt++;
        l--;r++;
        cout<<endl;
    }
    // int arr[4]={1,2,3,4};
    // for(int i=0;i<10;++i){
    //     cout<<endl;
    // for(int i=0;i<4;++i)
    //     cout<<"*";
}

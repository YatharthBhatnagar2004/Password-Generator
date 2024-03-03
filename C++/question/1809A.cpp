#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t; 
    
    while(t--){
        string n;
        cin>>n;
        
        map<int,int>v;
        for (int  i = 0; i < n.size(); i++)
        {
            v[n[i]]++;
        }
        
        
        int x=0;
        for(auto it:v){
            x=max(x,it.second);
        }
        if(x==1) cout<<4<<endl;
        else if(x==2) cout<<4<<endl;
        else if(x==3) cout<<6<<endl;
        else if(x==4) cout<<-1<<endl;
    }

}
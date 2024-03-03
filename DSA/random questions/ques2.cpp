#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the amount: ";
    cin>>n;
    cout<<endl;
    int hundred=0,fifty=0,tewnty=0,ten=0,one=0;
    hundred=n/100;
    n=n%100;
    fifty=n/50;
    n=n%50;
    tewnty=n/20;
    n=n%20;
    ten=n/10;
    n=n%10;
    one=n/1;
    cout<<"You will need "<<hundred<<" 100$ notes, "<<fifty<<" 50$ notes, "<<tewnty<<" 20$ notes, "<<ten<<" 10$ notes and "<<one<<" 1$ notes."<<endl;    
}

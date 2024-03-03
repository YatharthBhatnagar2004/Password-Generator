#include<iostream>
#include<cmath>
using namespace std;
long long factorial1(long long n){
    if (n==0){
        return 1;
    }
    else{
        return n*factorial1(n-1);
    }
}
int main (){
    int n=0;
    cout<<"which number's factorial would u like to calculate: ";
    cin>>n;
    cout<<factorial1(n)<<endl;
    cout<<factorial1(8)<<endl;

    
}

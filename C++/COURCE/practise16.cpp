#include<iostream>
using namespace std;
int main(){
    int num=0;
    int lower=10;
    int upper=20;
    cout<<boolalpha;
    // cout<<"Enter an integer between "<<lower<<" and "<<upper<<" : ";
    // cin>>num;
    // bool within_bounds{false};
    // within_bounds=(num>lower && num<upper);
    // cout<<"Is the integer entered within bounds : "<<within_bounds<<endl;
    
    bool outside_bounds=false;
    cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<": ";
    cin>>num;
    outside_bounds=(num<lower||num>upper);
    cout<<num<<" is outside "<<lower<<" and "<<upper<<" : "<<outside_bounds<<endl;


}
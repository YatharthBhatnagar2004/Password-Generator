#include<iostream>
using namespace std;
int main(){
    int num=0;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num%2==0)
    cout<<num<<" is even."<<endl;
    else
    cout<<num<<" is odd."<<endl;
    cout<<num<<" is "<<((num%2==0)?"even":"odd"    )<<endl;
    int num1=0, num2=0;
    cout<<"Enter 2 integers seperated by space: "<<endl;
    cin>>num1>>num2;
    if(num!=num2){
        cout<<"Largest: "<<((num1>num2)?num1:num2)<<endl;

    }else
    cout<<"These numbers are the same!!"<<endl;
}

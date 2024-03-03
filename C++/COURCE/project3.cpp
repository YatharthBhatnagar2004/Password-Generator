#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"Enter 3 different integers: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"You entered: "<<num1<<", "<<num2<<", "<<num3<<endl;
    int result;
    result=num1+num2+num3;
    cout<<"Sum of these three numbers is: "<<result<<endl;
    double average{0.0};
    average=static_cast<double>(result)/3;
    cout<<"Their average is: "<<average<<endl;
}
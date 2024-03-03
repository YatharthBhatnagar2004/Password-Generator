#include<iostream>
using namespace std;
int main(){
    int num1{10};
    int num2{20};
    num1=100;
    //cout<<"num1 is "<<num1<<endl;
    //cout<<"num1 is "<<num2<<endl;
    //cout<<"num1+num2 = "<<num1+num2<<endl;
    //cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    //int result{0};
    //result=num1+num2;
    //cout<<num1<<"+"<<num2<<"="<<result<<endl;
    const double inr_per_usd{81.54};
    cout<<"Welcome to USD to INR convertor"<<endl;
    cout<<"Enter the value in USD"<<endl;
    double inr{0.0};
    cin>> inr;
    cout<<"INR = "<<inr*inr_per_usd<<" $"<< endl;
}

 
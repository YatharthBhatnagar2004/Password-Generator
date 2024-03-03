#include<iostream>
using namespace std;
int main(){
    int cents;
    cout<<"Enter the amount of money in cents to be replaced as change: ";
    cin>>cents;
    cout<<"Change u will recieve will be as follows: ";
    int dollars;
    int quaters;
    int dime;
    int nickel;
    int penny;
    int result1;
    int result2;
    int result3;
    int result4;
    dollars=cents/100;
    result1=cents%100;
    quaters=result1/25;
    result2=result1%25;  
    dime=result2/10;
    result3=result2%10;
    nickel=result3/5;
    result4=result3%5;
    penny=result4;
    cout<<"\ndollars: "<<dollars<<"\nquaters: "<<quaters<<"\ndime: "<<dime<<"\nnickel: "<<nickel<<"\npenny: "<<penny<<endl;


}
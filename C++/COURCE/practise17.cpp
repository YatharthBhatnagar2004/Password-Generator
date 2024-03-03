#include<iostream>
using namespace std;
int main(){
    int num{};
    const int min=10;
    const int max=100;
    cout<<"Enter a number between "<<min<<" and "<<max<<": ";
    cin>>num;
    if(num>=min){
        cout<<"\n=====================================";
        cout <<"\n"<< num<<" is greater than or eaual to "<<min<<endl;}
    
    if (num<=max)
    cout<<"\n"<<num<<" is smaller than or equal to "<<max<<endl;
    if(num<=max&& num>=min)
    cout<<"\n"<<num <<" is within "<<min<<" and "<<max<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int total_number{8};
    int total_amount{100};
    double avg{0.0};
    avg=static_cast<double>(total_amount)/total_number;    
    cout<<"total average is: "<<avg<<endl;
}
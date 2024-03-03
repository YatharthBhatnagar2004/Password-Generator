#include<iostream>
using namespace std;
int main(){
    bool wear_coat{false};
    double temperature{};
    int speed{};
    const int speed_for_coat{25};
    const double temperature_for_coat{45.0};
    cout<<"Enter wind speed in mph: ";
    cin>>speed;
    cout<<"Enter temerature in (F): ";
    cin>>temperature;
    cout<<boolalpha;
    //wear_coat=(speed>speed_for_coat||temperature<temperature_for_coat);
    wear_coat=(speed>speed_for_coat&&temperature<temperature_for_coat);
    cout<<"Do you need to wear a coat: "<<wear_coat;
}
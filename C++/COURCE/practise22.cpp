#include <iostream>
#include<vector>
using namespace std;
int main(){
    // int scores[]{10,20,30};
    // for(int score:scores)
    // cout<<score<<endl;
    vector<double>temperature{89.9,80.1,78.0,69.9};
    double average_temp=0;
    double total=0;
    for(auto temp:temperature)
    total+=temp;
    if(temperature.size()!=0)
    average_temp=total/temperature.size();

    // cout<< fixed << setprecision (1);
    cout<<"Average temperature is: "<<average_temp<<" F."<<endl;


}
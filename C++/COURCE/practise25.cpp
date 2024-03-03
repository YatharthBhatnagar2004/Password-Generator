#include<iostream>
#include<vector>
using namespace std;
int main(){
    // for (int num1=1;num1<=10;++num1){
    //     for(int num2=1;num2<=10;++num2){
    //         cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;

    //     }
    //     cout<<"==================================="<<endl;
    // }
    // vector<vector<int>> vector_2d
    // {
    //     {1,2,3},
    //     {10,20,30,40},
    //     {100,200,300,400,500},
    // };
    // for(auto vac:vector_2d){
    //     for(auto val:vac){
    //         cout<<val<<" ";

    //     }
    // }
    int numitems=0;
    cout<<"How many items u have ?"<<endl;
    cin>>numitems;
    vector<int>data{};
    for(int i=1;i<=numitems;
    ++i){
        int dataitems=0;
        cout<<"Enter data item "<<i<<" : "<<endl;
        cin>>dataitems;
        data.push_back(dataitems);


    }
    cout<<"\nDisplaying histogram: "<<endl;
    for(auto val:data){
    for(int i{1};i<=val;++i){
        cout<<"-"<<" ";
    }
    cout<<endl;
    }
cout<<endl;
}
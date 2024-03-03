#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main (){
    vector<int>vector1;
    vector<int>vector2;
    vector1.pb(10);
    vector1.pb(20);
    cout<<"First element in vector1: "<<vector1[0]<<endl;
    cout<<"Second element in vector1: "<<vector1[1]<<endl;
    cout<<"Total elements in vector1 are "<<vector1.size()<<endl;
    vector2.pb(100);
    vector2.pb(200);
    cout<<"First element in vector2: "<<vector2[0]<<endl;
    cout<<"Second element in vector2: "<<vector2[1]<<endl;
    cout<<"Total elements in vector2 are "<<vector2.size()<<endl;
    vector<vector<int>>vector_2d;
    vector_2d.pb(vector1);
    vector_2d.pb(vector2);
    cout<<"First element of vector_2d "<<vector_2d[0][0]<<endl;
    cout<<"Second element of vector_2d "<<vector_2d[0][1]<<endl;
    cout<<"Third element of vector_2d "<<vector_2d[1][0]<<endl;
    cout<<"Fourth element of vector_2d "<<vector_2d[1][1]<<endl;
    vector_2d[0][0]=1000;
    cout<<"First element of vector_2d "<<vector_2d[0][0]<<endl;
    cout<<"Second element of vector_2d "<<vector_2d[0][1]<<endl;
    cout<<"Third element of vector_2d "<<vector_2d[1][0]<<endl;
    cout<<"Fourth element of vector_2d "<<vector_2d[1][1]<<endl;
}
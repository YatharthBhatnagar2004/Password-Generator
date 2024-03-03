#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int random_number=0;
    size_t count=10;
    int min=1;
    int max=6;
    cout<<"RAND_MAX on my system is "<<RAND_MAX<<endl;
    srand(time(nullptr));
    for(int i=1;i<=count;++i){
        random_number=rand()%max+min;
        cout<<random_number<<endl;
    }

}
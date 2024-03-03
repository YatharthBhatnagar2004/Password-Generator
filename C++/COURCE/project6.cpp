#include<iostream>
using namespace  std;
int main(){
    int lenght;
    int width;
    int height;
    cout<<"Enter the dimensions (lenght, width, height) of the box (in cm) respectively: ";
    cin>>lenght>>width>>height;
    // cout<<"You entered\nlenght: "<<lenght<<"\nwidth: "<<width<<"\nheight: "<<height<<endl;
    double base_cost=2.50;
    double teir1_surfacharge=0.10;
    double teir2_surfacecharge=.25;
    int volume=0;
    double cost=0.0;
    //     if (lenght<=10||width<=10||height<=10)
    // cout<<"Shipment can be done.";
    // else
    // cout<<"Shipment can not be done.";
    // if (lenght<=10&&lenght>0&&width<=10&&width>0&&height<=10&&height>0){
    //     volume=lenght*width*height;
    //     if (volume>100)
    //     cost=volume*base_cost+(volume*teir1_surfacharge);
    //     else if (volume>500)
    //     cost=volume*base_cost+(volume*teir2_surfacecharge);
    if (lenght>10||width>10||height>10){
    cout<<"Sorry, ur package cannot be delivered.";
    }else{
        volume=lenght*width*height;
        cost=base_cost;
        if (volume>100){
        cost+=cost*teir1_surfacharge;
        cout<<"Adding teir 1 surfacecharge.";
        }else if(volume>500){
        cost+=cost*teir2_surfacecharge;
        cout<<"Adding tier 2 surface charge.";}


    }
   cout << "The volume of cube is: "<<volume;
   cout<<"\nUr package will cost: "<<cost;


        
    }





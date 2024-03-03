#include<iostream>
using namespace std;
int main (){
    // int number=0;
    
    // do{
        
    //     cout<<"Enter an integer b/w 1 and 5 "<<endl;
    //     cin>>number;
    // }
    // while(number>=1&&number<=5);
    // cout<<"Thanks!! "<<endl;
    //  char selection;
    // do{
    //     double width=0, height=0;
    //     double area=0;
    //     cout<<"Enter the height and width of the box seperated by a space: ";
    //     cin>>height>>width;
    //     area=width*height;
    //     cout<<"Area is: "<<area<<" Sq.M"<<endl;
       
    //     cout<<"Do you want another are (Y/N): ";
    //     cin>>selection;
    // }while(selection=='Y'||selection=='y');
    // cout<<"Thanks"<<endl;
    char selection;
    do{
        cout<<"\n1. Do this "<<endl;
        cout<<"\n2. Do that "<<endl;
        cout<<"\n3. Do this or that "<<endl;
        cout<<"\nQ. Quit "<<endl;
        cout<<"\nEnter ur selection "<<endl;
        cin>>selection;

        if(selection=='1')
        cout<<"You chose 1 - Doing this "<<endl;
        else if (selection=='2')
        cout<<"You chose 2 - Doing that "<<endl;
        else if (selection=='3')
        cout<<"You chose 3 - Doing this or that "<<endl;
        else if (selection=='Q'||selection=='q')
        cout<<"You chose to quit "<<endl;
        else 
        cout<<"\nInvalid input!! "<<endl;
    }while(selection!='Q'&&selection!='q');
}
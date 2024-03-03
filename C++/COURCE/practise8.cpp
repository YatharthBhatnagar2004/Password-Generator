#include <iostream>
using namespace std;
int main(){
    cout<<"Hello!!, welcome to Frank's Carpet Cleaning Service."<<endl;
    cout<<"How many rooms would you like cleaned ? ";
    int number_of_rooms{0};
    cin>>number_of_rooms;
    cout<<"\nEstimate for cleaning service"<<endl;
    cout<<"Number of Rooms: "<<number_of_rooms<<endl;
    cout<<"Price per room: $"<<30<<endl;
    cout<<"Cost: $"<<30*number_of_rooms<<endl;
    cout<<"Tax: $"<<30*number_of_rooms*0.06<<endl;
    cout<<"=================================="<<endl;
    cout<<"Total Amount: $"<<(30*number_of_rooms)+(30*number_of_rooms*0.06)<<endl;
    cout<<"\nThank You, for calling us!! Have a nice day."<<endl;
    return 0;



}
#include<iostream>
using namespace std;
int main(){
     // cout<<"Welcome to Frank's Cleaning Service!!"<<endl;
     // cout<<"\nHow many small rooms would u liked to get cleaned ? "<<endl;
     // int number_of_small_rooms{6};
     // int number_of_big_rooms{7};
     // cin>>number_of_small_rooms;
     // cout<<"How many big rooms would u like to get cleaned ? "<<endl;
     // cin>>number_of_big_rooms;
     // const double price_per_small_room{25.0};
     // cout<<"Price per small room: $"<<price_per_small_room<<endl;
     // const double price_per_big_room{35.0};
     // cout<<"price per big room: $"<<price_per_big_room<<endl;
     // cout<<"Total cost : "<<(number_of_big_rooms*price_per_big_room)+(price_per_small_room*number_of_small_rooms)<<endl;
     // double tax(0.06);
     // cout<<"Tax: $"<<((number_of_big_rooms*price_per_big_room)+(number_of_small_rooms*price_per_small_room))*tax<<endl;
     // cout<<"Total estimate: $"<<((number_of_big_rooms*price_per_big_room)+(number_of_small_rooms*price_per_small_room))*tax+((number_of_big_rooms*price_per_big_room)+(price_per_small_room*number_of_small_rooms))<<endl;
     // const int estimate_expiry{30};
     // cout<<"This estimate is valid till "<<estimate_expiry<<endl;
     // return 0;
     int i{};
    int j{};
    int m{};
    cout << "Enter the side of the square : ";
    cin >> i;
    for (j = 1; j <= i; j++)
    {
        for (m = 1; m <= i; m++)
        {
            if (j <= (i - 1) && m <= (i - 1) && j >= 2 && m >= 2)
                cout << " ";
            else
                cout << m;
        }
        cout<<endl;
}
}




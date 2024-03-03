#include <iostream>
using namespace std;
const double pi = 3.14159;
double calc_area_circle(double radius)
{
    return pi * radius * radius;
}
void area_circle()
{
    double radius = 0;
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}
double calc_vol_circle(double radius,double height){
    return pi*radius*radius*height;
}
void volume_cylinder()
{
    double radius=0;
    double height = 0;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout << "Enter the height of cylinder: ";
    cin >> height;
    cout << "Volume of cylinder of height " << height << " cm and radius " << radius << " cm is: " <<calc_vol_circle(radius,height)<<endl;
}
int main()
{
    area_circle();
    volume_cylinder();
}
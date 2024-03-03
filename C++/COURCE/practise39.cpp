#include <iostream>
#include <vector>
#include <string>
using namespace std;
// void scaler_number(int &num);
// int main()
// {
//     int number = 1000;
//     scaler_number(number);
//     cout << number << endl;
// }
// void scaler_number(int &num)
// {
//     if (num > 100)
//     {
//         num = 100;
//     }
// }

//void func2(int x, int y, int z)
// pass by refrence agr and nhi lagaya toh x mai return ki ek copy bheji jaegi aur aap x mai koi bhi change kro result mai koi change nhi aaega
void func2(int &x,int y ,int z)
//agr and laga doge toh result ka addres bheja jaega to direct change result mai kiya jaega jo bhi x mai change hoga
{ 
    x += y + z;
}
int func1(int a, int b)
{
    int result{};
    result = a + b;
    func2(result, a, b);
    return result;
}
int main()
{
    int x = 50;
    int y = 5;
    int z = 10;
    z = func1(x, y);
    cout << z;
}
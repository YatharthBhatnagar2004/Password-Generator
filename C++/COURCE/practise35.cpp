#include <iostream>
using namespace std;
int add_numbers(int, int);
int main()
{
    int result = 0;
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    result = add_numbers(a, b);
    cout << result;
}
int add_numbers(int a, int b)
{
    return a + b;
}
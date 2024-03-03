#include <bits/stdc++.h>
using namespace std;
void calculator(double a, double b, char c)
{
    if (c == '*')
        cout << a * b << endl;
    else if (c == '/')
    {
        double num = 0;
        num = a / b;
        cout<< fixed<< setprecision(6) << num;
    }
    else if (c == '+')
        cout << a + b << endl;
    else
        cout << a - b << endl;
    ;
}

int main()
{
    double a, b;
    char c;
    cin >> a >> b >> c;
    calculator(a, b, c);
}   
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << endl;
    char op;
    cout << "Enter the operation: ";
    cin >> op;
    cout << endl;
    switch (op)
    {
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    case '-':
        cout << a - b;
        break;
    case '+':
        cout << a + b;
        break;
    }
}
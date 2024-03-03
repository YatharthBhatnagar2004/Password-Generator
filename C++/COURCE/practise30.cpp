#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    for (int i=0; i <= 10; ++i)
    {
        for (int j=0; j <= 10; ++j)
        {
            cout << i << " * " << j << " = " << i * j << " ";
            // result = i * j;
            // cout << result << endl;
        }
    }
}
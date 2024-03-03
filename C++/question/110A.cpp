#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int digit = 0;
    int count = 0;

    while (n != 0)
    {
        digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            count++;
        }

        n /= 10;
    }
  

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
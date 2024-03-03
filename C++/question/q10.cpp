#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 0;
    cin >> l;
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        int n = 0;
        cin >> n;
        int k = n;
        while (n != 0)
        {
            int digit = 0;
            digit = n % 10;
            if (k % digit == 0)
            {
                count++;
            }
            n = n / 10;
        }
        cout << count;
    }
}
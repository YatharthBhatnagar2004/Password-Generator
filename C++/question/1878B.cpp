#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        cout << 1 << " " << 3 << " " << 5 << " ";
        count = 3;
        int k = 7;
        while (count < n)
        {
            bool flag = false;
            for (int i = 2; i < sqrt(k); ++i)
            {
                if (k % i == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << k << " ";
                count++;
            }
            k++;
        }
        cout << endl;
    }
}
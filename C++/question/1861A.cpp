#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<int> v;
        while (n != 0)
        {
            int digit = n % 10;
            v.push_back(digit);
            n /= 10;
        }
        vector<int> v1;
        for (int i = 8; i >= 0; --i)
        {
            v1.push_back(v[i]);
        }
        int ans;
        for (int i = 0; i < 9; ++i)
        {
            if(v1[i]==1||v1[i]==3){
                ans=v1[i];
                break;
            }
        }
        if(ans==3){
            cout<<31;
        }else cout<<13;
        cout << endl;
        // for (int i = 0; i < 9; ++i)
        // {
        //     for (int j = i + 1; j < 9; ++j)
        //     {
        //         int number = v1[i] * 10 + v1[j];
        //         flag = 1;
        //         for (int k = 2; k <= sqrt(number); ++k)
        //         {
        //             if (number % k == 0)
        //             {
        //                 flag = 0;
        //             }
        //         }
        //         if (flag)
        //         {
        //             flag1 = 1;
        //             cout << number << endl;
        //             break;
        //         }
        //     }
        //     if (flag1)
        //     {
        //         break;
        //     }
        // }
    }
}
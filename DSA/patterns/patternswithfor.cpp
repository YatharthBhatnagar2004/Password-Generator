#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //     for (int i = 1; i <= n; ++i)
    //     {
    //         for (int j = 1; j <= i; ++j)
    //         {
    //             cout << "*";
    //         }
    //         cout << endl;
    //     }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = n - i; j >=0; --j)
    //     {
    //         cout << " ";}

    //     for (int j= 1; j <= i; ++j)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    for (int i = 0; i <= n; ++i)
    {
        for (int j = n - i + 1; j >= 0; --j)
        {
            cout << " ";
        }
        for (int j = (2 * i + 1); j > 0; --j)
        {
            cout << "*";
        }
        for (int j = n - i + 1; j >= 0; --j)
        {
            cout << " ";
        }
        cout<<endl;
    }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = n-i; j >= 0; --j)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {
    //         cout <<j;
    //     }
    //     cout << endl;
    // }
    // int k = 1;
    // for (int i = 1; i <= 2 * n - 1; ++i)
    // {
    //     if (i <= n)
    //     {
    //         for (int j = 1; j <=i; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = n - k; j > 0; j--)
    //         {
    //             cout << "*";
    //         }
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = 0; j <i; ++j)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = n - i; j > 0; --j)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int k = 0;
    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = 0; j < i; ++j)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = (2 * n - (2 * k - 1)); j > 0; --j)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < i; ++j)
    //     {
    //         cout << " ";
    //     }
    //     ++k;
    //     cout<<endl;
    // }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = n - i + 1; j >= 0; --j)
    //     {
    //         cout << " ";
    //     }
    //     int cnt = 0;
    //     for (int j = (2 * i + 1); j > 0; j--)
    //     {
    //         if (cnt % 2 == 0)
    //             cout << "*";
    //         else
    //             cout << " ";
    //         cnt++;
    //     }
    //     for (int j = n - i + 1; j >= 0; --j)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    int k = 0;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        int cnt = 0;
        for (int j = (2 * n - (2 * k + 1)); j > 0; --j)
        {
            if (cnt % 2 == 0)
                cout << "*";
            else
                cout << " ";
          cnt++;
        }
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        cout << endl;
        ++k;
    }
    // int k = 1, cnt = 2 * n - 3,l=n-1;
    // for (int i = 0; i < 2 * n; ++i)
    // {
    //     if (i < n)
    //     {
    //         for (int j = l; j >0; --j)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = (2 * i + 1); j > 0; --j)
    //         {
    //             cout << "*";
    //         }
    //         l--;
    //     }
    //     else
    //     {
    //         for (int j = 0; j < k; ++j)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = cnt; j > 0; --j)
    //         {
    //             cout << "*";
    //         }
    //         k++;
    //         cnt -= 2;
    //     }
    //     cout << endl;
    // }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=(n-i);++j){
            cout<<" ";
        }
        for(int j=1;j<=i;++j){
            cout<<j;
        }
        for(int j=(i-1);j>=1;--j){
            cout<<j;
        }
        cout<<endl;
    }
    // for(int i=1;i<=n;++i){
    //     for(int j=n-i;j>0;--j){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<=i;++j){
    //         cout<<j;
    //     }
        
    //     cout<<endl;
    // }
    // int cnt=0;
    // for(int i=1;i<=n;++i){
    //     for(int j=1;j<=i;++j){
    //         char ch='A'+cnt;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    //     cnt++;
    // }
    
    // int cnt=0;
    // for(int i=0;i<n;++i){
    //     for (int j = 0; j < n; j++)
    //     {
    //         char value='A'+cnt;
    //         cout<<value;
    //         cnt++;
    //     }
    //     cout<<endl;
        
    // }


}

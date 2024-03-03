#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int i = 1;
    // -------------1--------------------
    //     while(i<=n){
    //         int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         ++j;
    //     }
    //     cout<<endl;
    //     ++i;
    // }
    // -------------2--------------------
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         int k = i;

    //         cout << k;
    //         ++k;

    //         ++j;
    //     }
    //     cout << endl;
    //     ++i;
    // }
    // -------------3--------------------
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------4--------------------
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << count;
    //         ++j;
    //         ++count;
    //     }
    //     ++i;
    //     cout << endl;
    // }
    // -------------5--------------------
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------6--------------------
    // int cnt = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= i)
    //     {
    //         cout << cnt;
    //         ++j;
    //     }
    //     cnt++;
    //     ++i;
    //     cout << endl;
    // }
    // -------------7--------------------
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------8--------------------
    // while(i<=n){
    //     int j=1;int v=i;
    //     while(j<=i){
    //         cout<<v<<" ";
    //         ++j;
    //         ++v;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------9--------------------
    // while(i<=n){
    //     int j=1;int v=i;
    //     while(j<=i){
    //         cout<<v<<" ";
    //         v--;
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------10--------------------
    // while(i<=n){
    //     char ch='A'+i-1;
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch;
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------11--------------------
    // char count='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count;
    //         count++;
    //         ++j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------12---------------------
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char value = 'A' + i + j - 2;
            cout << value << " ";
            ++j;
        }
        cout << endl;
        ++i;
    }
    // -------------12---------------------
    // while (i <= n)
    // {
    //     int j = 1;
    //     int cnt=0;
    //     while (j <= i)
    //     {
    //         char value = 'A' + cnt ;
    //         cout << value << " ";
    //         ++j;cnt++;
    //     }
    //     cout << endl;
    //     ++i;
    // }
    // -------------13---------------------
    // while(i<=n){
    //     int cnt=n-i+1;
    //     int j=1;
    //     while(j<=i){
    //         cout<<cnt;
    //         ++j;
    //         cnt++;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------14---------------------
    // while(i<=n){
    //     char value='a'+n-i;
    //     int j=1;
    //     while(j<=i){
    //         cout<<value;
    //         value++;
    //         j++;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------15---------------------
    // while (i <= n)
    // {
    //     int j = 1;
    //     int k = n - i-1;
    //     while (k >= 0)
    //     {
    //         cout << " ";
    //         --k;
    //     }
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         ++j;
    //     }

    //     ++i;

    //     cout << endl;
    // }
    // -------------16---------------------
    // while(i<=n){
    //     int j=n-i+1;
    //     while(j>0){
    //         cout<<"*";
    //         --j;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------17---------------------
    // while(i<=n){
    //     int space=n-i-1;
    //     int j=1;
    //     int k=i-1;
    //     while(space>=0){
    //         cout<<" ";
    //         space--;
    //     }
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     while(k>0){
    //         cout<<k;
    //         --k;
    //     }
    //     ++i;
    //     cout<<endl;
    // }
    // -------------18---------------------
    //-------------#DABANGG PATTERN----------------------
    // while(i<=n){
    //     int j=1;int k=0;int l=n-i+1;
    //     while(j<=n-i+1){
    //         cout<<j;
    //         ++j;
    //     }
    //     while(k<=2*i-3){
    //         cout<<"*";
    //         ++k;
    //     }
    //     while(l>0){
    //         cout<<l;
    //         --l;
    //     }
    //     cout<<endl;
    //     ++i;
    // }
}

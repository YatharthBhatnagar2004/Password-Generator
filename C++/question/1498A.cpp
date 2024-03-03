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
        long long x = n;
        long long int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        int gcd1 = 0,gcd2=0,gcd3=0;
        gcd1=__gcd(sum,x);
        x++;n=x;sum=0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        gcd2=__gcd(sum,x);
        x++;n=x;sum=0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        gcd3=__gcd(sum,x);
        if(gcd1>1)cout<<x-2<<endl;
        else if(gcd2>1) cout<<x-1<<endl;
        else if(gcd3>1) cout<<x<<endl;
    }
}
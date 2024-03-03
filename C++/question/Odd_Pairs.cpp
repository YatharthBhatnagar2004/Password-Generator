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
        int odd = 0;
        int even = 0;
        if (n % 2 == 0)
        {
            odd = n/2;
            even = n / 2;
        }
        else
        {
            odd = (n + 1) / 2;
            even = (n - 1) / 2;
        }
        long long int ans = odd*even*2; 
        cout << ans<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int count = 0;
        cin >> n >> m;
        if (n==1)
        {
            n++;
        }
        // cout<<n<<" "<<m<<endl;
        
        for (int i = n; i <= m; ++i)
        {
            count = 0;
            for (int j = 2; j*j <= i; ++j)
            {
                if (i % j == 0){
                    count++; 
                    break;
                }
            }
            // cout<<count<<endl;
            if (count == 0) cout << i << endl;
        }
    }
}
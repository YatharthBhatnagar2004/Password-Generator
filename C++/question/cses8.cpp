#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long sum = (1LL * (n * (n + 1))) / 2;
    if (sum & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        long long int k = sum / 2;
        vector<int> v, v1;
        int i = n;
        for (; i >= 1; --i)
        {
            k -= i;
            if (k >= 0)
            {
                v.push_back(i);
            }
            else
            {
                k += i;
                break;
            }
        }
        if (k != 0)
        {

            v.push_back(k);
        }
        for (int j = i; j >= 1; --j)
        {
            if (j == k)
            {
                continue;
            }
            v1.push_back(j);
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        cout << v1.size() << endl;
        for (int i = 0; i < v1.size(); ++i)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
}

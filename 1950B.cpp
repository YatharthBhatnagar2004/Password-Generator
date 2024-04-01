
#include <bits/stdc++.h>
#define fastAF                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define pb push_back
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define mod (int)1e9 + 7
#define pi 3.1415926536
#define rev greater<int>()
#define deci(x) setprecision(x)
#define revll greater<ll int>()
#define all(v) v.begin(), v.end()
#define No cout << "NO" << endl;
#define Yes cout << "YES" << endl;
#define rev2 greater<pair<int, int>>()
#define minus_one cout << "-1" << endl;
#define rev2ll greater<pair<ll int, ll int>>()
#define ff first
#define ss second
#define get_unique(v)                                 \
    {                                                 \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> v;
        for (int i = 1; i <= n; ++i)
        {
            string s = "";
            if (i & 1)
            {
                for (int j = 1; j <= n; ++j)
                {
                    if (j & 1)
                    {
                        s += "##";
                    }
                    else
                    {
                        s += "..";
                    }
                }
            }
            else
            {
                for (int j = 1; j <= n; ++j)
                {
                    if (j & 1)
                    {
                        s += "..";
                    }
                    else
                    {
                        s += "##";
                    }
                }
            }
            v.pb(s);
            v.pb(s);
        }
        for (auto x : v)
        {
            cout << x << endl;
        }
    }
}

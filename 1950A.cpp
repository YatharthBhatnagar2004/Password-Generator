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

#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR" << endl;
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
}

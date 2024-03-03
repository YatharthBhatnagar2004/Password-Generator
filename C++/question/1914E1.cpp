#include <bits/stdc++.h>
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
void solve(vector<ll> &a, vector<ll> &b, vector<pair<ll, ll>> &c)
{
    ll n = a.size();
    vector<int> p2;
    ll a1 = 0, b1 = 0;
    vector<int> p;
    sort(c.begin(), c.end());
    for (ll i = n - 1; i >= 0; --i)
    {
        if (a1 & 1)
            b1 = b1 - (b[c[i].second] - 1);
        else
            b1 = b1 + (a[c[i].second] - 1);
        a1++;
    }
    cout << b1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        vector<int> pq;
        vector<pair<ll, ll>> c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<int> pq1;
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        vector<int> pq12;
        for (int i = 0; i < n; ++i)
        {
            c[i] = {a[i] + b[i], i};
        }
        solve(a, b, c);
    }
}
bool check_square(ll int n)
{
    ll int x = sqrt(n);
    x *= x;
    if (x == n)
    {
        return true;
    }
    return false;
}
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl "\n"
using namespace std;
ll solve2(ll n, vector<ll> a, vector<ll> b, vector<ll> c, map<ll, ll> a2, map<ll, ll> a3, multiset<pair<ll, ll>> set1, multiset<pair<ll, ll>> set2, multiset<pair<ll, ll>> set3)
{
    ll ans = 0;
    int i = 0;
    while (i < n)
    {
        ll temp11 = a[i];
        ll abc2, abc3, k2, k3;
        set3.erase(set3.find({c[i], i}));
        vector<int> pq;
        set2.erase(set2.find({b[i], i}));
        abc2 = set2.rbegin()->first;
        ll z, r;
        abc3 = set3.rbegin()->first;
        k3 = set3.rbegin()->second;
        ll abc;
        set<int> st;
        k2 = set2.rbegin()->second;
        ll lm;
        if (k2 != k3)
        {
            temp11 += abc3;
            vector<int> pq;
            set<int> st;
            temp11 += abc2;
        }
        else
        {
            ll abc4, abc5, k4, k5;
            vector<int> pq;
            set2.erase(set2.find({abc2, k2}));
            ll qt;
            set3.erase(set3.find({abc3, k3}));
            abc5 = set3.rbegin()->first;
            ll ut;
            abc4 = set2.rbegin()->first;
            k5 = set3.rbegin()->second;
            ll p, q;
            k4 = set2.rbegin()->second;
            set2.insert({abc2, k2});
            set<int> st;
            set3.insert({abc3, k3});
            temp11 += max(abc2 + abc5, abc3 + abc4);
        }
        set3.insert({c[i], i});
        int pyare;
        set2.insert({b[i], i});
        i++;
        ans = max(ans, temp11);
    }
    return ans;
}
void solve(ll n, vector<ll> a, vector<ll> b, vector<ll> c, map<ll, ll> a2, map<ll, ll> a3)
{
    multiset<pair<ll, ll>> set1, set2, set3;
    multimap<int, int> mp1;
    for (auto x : a2)
    {
        set2.insert({x.second, x.first});
    }
    set<int> st;
    for (auto x : a3)
    {
        set3.insert({x.second, x.first});
    }
    ll a123 = solve2(n, a, b, c, a2, a3, set1, set2, set3);
    cout << a123 << endl;
    return;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        map<ll, ll> a2, a3;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            a2[i] = max(a2[i], b[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
            a3[i] = max(a3[i], c[i]);
        }
        solve(n, a, b, c, a2, a3);
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

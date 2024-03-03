#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
template <typename T>
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
vll divisors;
vll factors_prime;
vector<pll> powers;
vector<pll> hash_values;
const pll primes = {1000992299, 1000000009};
bool check_square(ll int *);
void Divisors(ll int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisors.pb(i);
            if (n / i != i && i > 1)
            {
                divisors.pb(n / i);
            }
        }
    }
}
void Sieve(ll int n, bool sieve[])
{
    memset(sieve, true, n + 1);
    sieve[0] = false;
    sieve[1] = false;
    for (ll int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            for (ll int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}
bool CheckPrime(ll int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (ll int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void PrimeFactors(ll int n)
{
    while (n % 2 == 0)
    {
        factors_prime.pb(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            factors_prime.pb(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors_prime.pb(n);
    }
}
ll bin_expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_inverse(ll a, ll b)
{
    return bin_expo(a, b - 2, b);
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mod_inverse(b, m), m) + m) % m;
}
ll int setBit(ll int x, int i)
{
    return (x | (1 << i));
}
ll int unsetBit(ll int x, int i)
{
    return (x & ~(1 << i));
}
char upperToLower(char x)
{
    return x | ' ';
}
char lowerToUpper(char x)
{
    return x & ('_');
}
void rollinHash(string &s)
{
    int n = s.length();
    hash_values.clear();
    powers.clear();
    vector<pll> hashes(n, {s[0] - 96, s[0] - 96});
    vector<pll> power(n, {1, 1});
    for (int i = 1; i < n; i++)
    {
        hashes[i].first = (hashes[i - 1].first * 31 + (s[i] - 96)) % primes.first;
        hashes[i].second = (hashes[i - 1].second * 53 + (s[i] - 96)) % primes.second;
        power[i].first = (power[i - 1].first * 31) % primes.first;
        power[i].second = (power[i - 1].second * 53) % primes.second;
    }
    hash_values = hashes;
    powers = power;
}
pll substringHash(ll int l, ll int r)
{
    ll hash1, hash2;
    hash1 = hash_values[r].first;
    if (l > 0)
        hash1 = ((hash1 - (hash_values[l - 1].first * powers[r - l + 1].first) % primes.first) + primes.first) % primes.first;
    hash2 = hash_values[r].second;
    if (l > 0)
        hash2 = ((hash2 - (hash_values[l - 1].second * powers[r - l + 1].second) % primes.second) + primes.second) % primes.second;
    return {hash1, hash2};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;
        ll k1, k2, k3, k4;
        cin >> k1;
        vll v1(k1);
        int i = 0;
        while (k1--)
        {
            cin >> v1[i];
            ++i;
        }
        cin >> k2;
        vll v2(k2);
        i = 0;
        while (k2--)
        {
            cin >> v2[i];
            ++i;
        }
        cin >> k3;
        vll v3(k3);
        i = 0;
        while (k3--)
        {
            cin >> v3[i];
            ++i;
        }
        cin >> k4;
        vll v4(k4);
        i = 0;
        while (k4--)
        {
            cin >> v4[i];
            ++i;
        }
        ll s1, s2, s3, s4;
        s1 = v1[v1.size() - 1] - v1[0];
        s2 = v2[v2.size() - 1] - v2[0];
        s3 = v3[v3.size() - 1] - v3[0];
        s4 = v4[v4.size() - 1] - v4[0];
        ll a1, a2, a3, a4;
        a1 = 1LL * s1 * h;
        a2 = 1LL * s2 * h;
        a3 = 1LL * s3 * w;
        a4 = 1LL * s4 * w;
        cout << max({a1, a2, a3, a4}) << endl;
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
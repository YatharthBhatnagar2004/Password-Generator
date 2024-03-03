#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;
    int prod=n*t,sum=n+t;
    cout<<abs(prod-sum);
}
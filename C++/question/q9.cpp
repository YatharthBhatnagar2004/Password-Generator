#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 0;
    cin >> l;
    vector<int> v;
    for (int i = 0; i < l; i++)
    {
        int prisoners = 0;
        int sweets = 0;
        int seat = 0;
        cin >> prisoners >> sweets >> seat;
        int m = seat - 1;
        int n = sweets % prisoners;
        int q=(m+n)%prisoners;
        v.push_back(q);

    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
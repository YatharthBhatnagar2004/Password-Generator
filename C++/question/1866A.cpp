#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        v.push_back(abs(arr[i]));
    }
    sort(v.begin(), v.end());
    cout<<v[0];
}

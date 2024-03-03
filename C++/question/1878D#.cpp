#include <bits/stdc++.h>
using namespace std;
int lowerBound(int arr[], int n, int x)
{
    int i = 1, j = n, mid = (i + j) / 2, ans = n + 1;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (arr[mid] <= x)
        {
            ans = mid;
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}
int upperBound(int arr[], int x, int n)
{
    int i = 1, j = n, mid = (i + j) / 2, ans = n + 1;
    while (i <= j)
    {
        if (arr[mid] >= x)
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
        mid = (i + j) / 2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l[k], r[k];
        for (int i = 1; i <= k; ++i)
        {
            cin >> l[i];
        }
        for (int i = 1; i <= k; ++i)
        {
            cin >> r[i];
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            int lower = lowerBound(l, k, x);
            int upper = upperBound(r, x, k);
            int indx1 = min(x, l[lower] + r[upper] - x);
            int indx2 = max(x, l[lower] + r[upper] - x);
            indx1--;
            indx2--;
            reverse(s.begin() + indx1, s.end() - (s.size() - indx2 - 1));
        }
        cout << s << endl;
    }
}
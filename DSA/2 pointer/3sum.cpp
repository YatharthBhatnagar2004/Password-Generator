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
    sort(arr, arr + n);
    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; ++i)
    {
        if (i == 0 || (i > 0 && arr[i] != arr[i - 1]))
        {

            int hi = n - 1;
            int lo = i + 1;
            int sum = 0 - arr[i];
            while (lo < hi)
            {
                if (arr[lo] + arr[hi] == sum)
                {
                    vector<int> temp;
                    temp.push_back(arr[lo]);
                    temp.push_back(arr[hi]);
                    temp.push_back(arr[i]);
                    ans.push_back(temp);
                    while (lo < hi && arr[lo] == arr[lo + 1])
                    {
                        lo++;
                    }
                    while (lo < hi && arr[hi] == arr[hi - 1])
                    {
                        hi--;
                    }
                    lo++;
                    hi--;
                }
                else if (arr[lo] + arr[hi] < sum)
                {
                    lo++;
                }
                else
                {
                    hi--;
                }
            }
        }
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
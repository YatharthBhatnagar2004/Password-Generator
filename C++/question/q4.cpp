#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int k = 0;
    cin >> n;
    cin >> k;
    cout<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp=arr[i];
        for (int j = i+1; j < n; j++)
        {
            if ((temp + arr[j] )% k == 0)
            {
                count++;
            }
        }
    }
    cout<<endl;
    cout<<count;
}
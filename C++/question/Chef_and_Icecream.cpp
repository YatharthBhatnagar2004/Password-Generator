#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool check = true;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int cnt5 = 0, cnt10 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 5)
            {
                cnt5++;
            }
            else if (arr[i] == 10)
            {
                cnt10++;
                cnt5--;
                if (cnt5 < 0)
                {
                    cout << "NO" << endl;
                    check = false;
                    break;
                }
            }
            else
            {
                if (cnt10 > 0)
                {
                    cnt10--;
                }
                else if(cnt10==0&&cnt5>2){
                    cnt5-=2;
                }
                else if (cnt10 < 1 || cnt5 < 2)
                {
                    check = false;
                    cout << "NO" << endl;
                    break;
                }
            }
        }

        if (check == true)
        {
            cout << "YES" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0, indx = 0;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                // cout << v[i][j] << endl;
                if (count == 0)
                {
                    if (count != 0)
                    {
                        continue;
                    }
                    if (v[i][j] == 'v')
                    {
                        indx = j;
                        count++;
                        break;
                    }
                }
                else if (count == 1)
                {
                    // j=indx;/
                    if (count != 1)
                    {
                        continue;
                    }
                    if (v[i][j] == 'i')
                    {

                        count++;
                        indx = j;
                        break;
                    }
                }
                else if (count == 2)
                {
                    // j=indx;/
                    if (count != 2)
                    {
                        continue;
                    }
                    if (v[i][j] == 'k')
                    {

                        count++;
                        indx = j;
                        break;
                    }
                }
                else if (count == 3)
                {
                    // j=indx;/
                    if (count != 3)
                    {
                        continue;
                    }
                    if (v[i][j] == 'a')
                    {

                        count++;
                        indx = j;
                        break;
                    }
                }
            }
        }
        if(count==4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string paper;
        int size, windowlenght;
        cin >> size >> windowlenght;
        cin >> paper;
        vector<int> v;
        for (int i = 0; i < size; ++i)
        {
            if (paper[i] == 'B')
            {
                v.push_back(i);
            }
        }
        if (windowlenght == 1)
        {
            cout << v.size() << endl;
        }
        else
        {
            int solution = 0;
            for (int i = 0; i < size; i++)
            {
                if (paper[i] == 'B')
                {
                    solution++;
                    i += windowlenght - 1;
                }
            }
            cout << solution << endl;
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t > 0)
    {
        int x, y = 0;
        cin >> x >> y;
        if(x==0||y==0){
            cout<<"NO"<<endl;
            continue;
        }
        if (x == y)
        {
            cout << "YES" << endl;
        }
        else if (x < y)
        {
            while (x <= y)
            {
                x = x * 2;
                if (x == y)
                {
                    break;
                }
            }
            if (x == y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            while (y <= x)
            {
                y = y * 2;
                if (x == y)
                {
                    break;
                }
            }
            if (x == y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        t--;
    }
}

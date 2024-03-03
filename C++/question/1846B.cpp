#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        bool flag = true;
        
        char a,b,c,d,e,f,g,h,i;
        a=s1[0],b=s1[1],c=s1[2];
        d=s2[0],e=s2[1],f=s2[2];
        g=s3[0],h=s3[1],i=s3[2];
        

        
        
        if (a==b&&a==c&&a!='.')
        {
            cout << a << endl;
        }
        else if (d==e&&d==f&&d!='.')
        {
            cout << d << endl;
        }
        else if (g==h&&g==i&&g!='.')
        {
            cout << g << endl;
        }
        else if (a==d&&a==g&&a!='.')
        {
            cout << a << endl;
        }
        else if (b==e&&b==h&&b!='.')
        {
            cout << b << endl;
        }
        else if (c==f&&c==i&&c!='.')
        {
            cout << c << endl;
        }
        else if (a==e&&a==i&&a!='.')
        {
            cout << a << endl;
        }
        else if (c==e&&c==g&&c!='.')
        {
            cout << c << endl;
        }
        else{
            flag = false;

        }
        if(flag==false)cout<<"DRAW"<<endl;
    }
}
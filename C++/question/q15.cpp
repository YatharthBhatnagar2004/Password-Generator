#include <iostream>
using namespace std;

bool check(char x)
{
	return x == 'a' || x == 'e' || x == 'o' || x == 'i' || x == 'u';
}
int main()
{
	int t = 0;
	cin >> t;
	while (t > 0)
	{
		int n = 0;
		cin >> n;
		char arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		if (n < 4)
		{
			cout << "YES" << endl;
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				// if (check(arr[i]) == 0 && check(arr[i + 1]) == 0 && check(arr[i + 2]) == 0 && check(arr[3]) == 0)
				if(arr[i]!='a','e','i','o','u'&&arr[i+1]!='a','e','i','o','u'&&arr[i+2]!='a','e','i','o','u'&&arr[i+3]!='a','e','i','o','u')
				{
					cout << "NO" << endl;
					break;
				}
				else
				{
					cout << "YES" << endl;
					
				}
				t--;
			}
		}
	}
}

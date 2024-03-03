#include <bits/stdc++.h>
using namespace std;
long long int modulo = 998244353;
long long int factorial(long long int n)
{
    long long int facto = 1;
    for (int i = 2; i <= n; ++i)
    {
        facto *= i;
    }
    return facto;
}
pair<long long int, long long int> ans(string question, int n)
{
    long long int ans = 0, solution = 0, x = 1;
    for (int i = 0; i < n; ++i)
    {
        ans += 1;
        if (question[i] != question[i + 1])
        {
            x = ((x * ans) % modulo);
            solution += ans - 1;
            ans = 0;
        }
    }
    return {x, solution};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (s[n - 1] == '0')
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
        long long int solution1 = ans(s, n).first;
        long long int solution2 = ans(s, n).second;
        long long int solution3 = factorial(solution2);
        solution1 = (solution1 * solution3) % modulo;
        cout << solution2 << " " << solution1 << endl;
    }
}
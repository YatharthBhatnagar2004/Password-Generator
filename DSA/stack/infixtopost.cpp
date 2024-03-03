#include <bits/stdc++.h>
using namespace std;
    int precedence(char c)
    {
        if (c == '^')
            return 3;
        else if (c == '/' || c == '*')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return 0;
    }
string infixtopost(string s)
{

    string result;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            result += c;
        }
        else if (c == '(')
        {
            st.push('(');
        }
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
}
string infixtopre(string s)
{
    string result;
    stack<char> st;
    for (int i = s.length() - 1; i >= 0; --i)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            result += c;
        }
        else if (c == ')')
        {
            st.push('(');
        }
        else if (c == '(')
        {
            while (!st.empty()&&st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && precedence(s[i]) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
}
int main()
{
    string s;
    cin >> s;
    string result = infixtopre(s);
    for (int i = result.length() - 1; i >= 0; --i)
    {
        cout << result[i];
    }
    // cout << result;
}
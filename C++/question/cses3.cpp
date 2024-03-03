#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int i = 0, j = 0, ans = 0,k=0;
    unordered_set<int> st;
    while (j < s.size())
    {
        if (st.find(s[j]) != st.end())
        {
            while (st.find(s[j]) != st.end())
            {
                st.erase(s[i]);
                i++;
            }
        }
        st.insert(s[j]);
        j++;
        k=st.size();
        ans = max(ans, k);
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}
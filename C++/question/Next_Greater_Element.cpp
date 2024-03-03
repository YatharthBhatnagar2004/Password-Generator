#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    stack<int> st;
    vector<int> v(n, 0);
    v[5] = -1;
    st.push(arr[5]);
    for (int i = n - 2; i >= 0; --i)
    {
        if (arr[i] < st.top())
        {
            v[i] = st.top();
            st.push(arr[i]);
            continue;
        }
        while (st.empty() == false && arr[i] > st.top())
        {
            st.pop();
        }
        if (st.empty() == true)
        {
            v[i] = -1;
        }else{
            v[i]=st.top();
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout << arr[i]<<" "<<v[i] << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (max(height(root->left), height(root->right)) + 1);
}
//--------------------------------------------------------------------------------------------------------------------------------------------
int balancedtree(node *root)
{
    if (root == NULL)
        return 0;
    int lh = balancedtree(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = balancedtree(root->left);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    return max(lh, rh) + 1;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
int diameter(node *root, int &maxi)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = diameter(root->left, maxi);
    int rh = diameter(root->right, maxi);
    maxi = max(lh + rh, maxi);
    return 1 + max(lh, rh);
}
//--------------------------------------------------------------------------------------------------------------------------------------------
int maxpathsum(node *root, int &mx)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = maxpathsum(root->left, mx);
    int rh = maxpathsum(root->right, mx);
    mx = max(lh + rh + root->data, mx);
    return (root->data + max(lh, rh));
}
//--------------------------------------------------------------------------------------------------------------------------------------------
vector<vector<int>> zigzag(node *root)
{
    vector<vector<int>> ans;
    queue<node *> q;
    bool flag = 1;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> v(size);
        int index = 0;
        for (int i = 0; i < size; ++i)
        {
            if (flag)
            {
                index = i;
            }
            else
            {
                index = size - 1 - i;
            }
            v[index] = q.front()->data;
            if (q.front()->left)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
        ans.push_back(v);
        flag = !flag;
    }
    return ans;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------ BOUNDARY TRAVERSAL-------------------------------------------------------------
bool isleaf(node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
        return 0;
}
void leftboundary(node *root, vector<int> &v)
{
    node *curr = root->left;
    while (curr)
    {
        if (!isleaf(curr))
        {
            v.push_back(curr->data);
        }
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}
void rightboundary(node *root, vector<int> &v)
{
    node *curr = root->right;
    stack<int> st;
    while (curr)
    {
        if (!isleaf(curr))
        {
            st.push(curr->data);
        }
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
}
void leaf(node *root, vector<int> &v)
{
    if (isleaf(root))
    {
        v.push_back(root->data);
    }
    if (root->left)
        leaf(root->left, v);
    if (root->right)
        leaf(root->right, v);
}
void printboundary(node *root)
{
    vector<int> v;
    v.push_back(root->data);
    leftboundary(root, v);
    leaf(root, v);
    rightboundary(root, v);
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<vector<int>> verticalorder(node *root)
{
    vector<vector<int>> v;
    map<int, map<int, multiset<int>>> mp;
    queue<pair<node *, pair<int, int>>> q;
    q.push({root, {0, 0}});
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int x = it.second.first;
        int y = it.second.second;
        mp[x][y].insert(it.first->data);
        if (it.first->left)
        {
            q.push({it.first->left, {x - 1, y + 1}});
        }
        if (it.first->right)
        {
            q.push({it.first->right, {x + 1, y + 1}});
        }
    }
    for (auto x : mp)
    {
        vector<int> a;
        for (auto z : x.second)
        {
            for (auto i : z.second)
            {
                a.push_back(i);
            }
        }
        v.push_back(a);
    }
    return v;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
vector<int> topview(node *root)
{
    vector<int> v;
    queue<pair<node *, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
        auto node = it.first;
        q.pop();
        int x = it.second;
        if (mp.find(x) == mp.end())
        {
            mp[x] = node->data;
        }
        if (it.first->left)
        {
            q.push({it.first->left, x - 1});
        }
        if (it.first->right)
        {
            q.push({it.first->right, x + 1});
        }
    }
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    return v;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
vector<int> bottomview(node *root)
{
    vector<int> v;
    queue<pair<node *, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while (!q.empty())
    {
        auto it = q.front();
        auto node = it.first;
        q.pop();
        int x = it.second;
        mp[x] = node->data;
        if (it.first->left)
        {
            q.push({it.first->left, x - 1});
        }
        if (it.first->right)
        {
            q.push({it.first->right, x + 1});
        }
    }
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    return v;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
vector<int> leftview(node *root)
{
    queue<pair<node *, int>> q;
    q.push({root, 0});
    vector<int> v;
    map<int, int> mp;
    while (!q.empty())
    {
        int size = 0;
        auto it = q.front();
        int x = it.second;
        q.pop();
        mp[x] = it.first->data;
        if (it.first->left)
        {
            q.push({it.first->left, x + 1});
        }
        if (it.first->right)
        {
            q.push({it.first->right, x + 1});
        }
    }
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    return v;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
vector<int> rightview(node *root)
{
    queue<pair<node *, int>> q;
    q.push({root, 0});
    vector<int> v;
    map<int, int> mp;
    while (!q.empty())
    {
        int size = 0;
        auto it = q.front();
        int x = it.second;
        q.pop();
        if (mp.find(x) == mp.end())
        {
            mp[x] = it.first->data;
        }
        if (it.first->left)
        {
            q.push({it.first->left, x + 1});
        }
        if (it.first->right)
        {
            q.push({it.first->right, x + 1});
        }
    }
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    return v;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
void recrightview(node *root, int lvl, vector<int> &v)
{
    if (root == NULL)
        return;
    if (v.size() == lvl)
    {
        v.push_back(root->data);
    }
    recrightview(root->right, lvl + 1, v);
    recrightview(root->left, lvl + 1, v);
}
//--------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(6);
    root->right = new node(3);
    root->right->left = new node(7);
    root->right->right = new node(8);
    root->right->left->left = new node(9);
    root->right->left->right = new node(10);
    // cout << balancedtree(root) << endl;
    // int mx = 0;
    // cout << maxpathsum(root, mx) << endl;
    // cout << mx << endl;
    // vector<vector<int>> v = verticalorder(root);
    vector<int> v;
    recrightview(root, 0, v);
    for (auto x : v)
    {
        // for (auto i : x)
        {
            cout << x << " ";
        }
        // cout << endl;
    }
    // printboundary(root);
}
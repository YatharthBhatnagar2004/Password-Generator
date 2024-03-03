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
        right = NULL;
        left = NULL;
    }
};
//------------------------------------------------------------------------------------------------------------------------------------------
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------
vector<vector<int>> levelorder(node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; ++i)
        {
            struct node *temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------
vector<int> iterpreorder(node *root)
{
    vector<int> ans;
    stack<node *> st;
    st.push(root);
    while (!st.empty())
    {
        struct node *temp = st.top();
        st.pop();
        if (temp->right != NULL)
            st.push(temp->right);
        if (temp->left != NULL)
            st.push(temp->left);
        ans.push_back(temp->data);
    }
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------
vector<int> iterinorder(node *root)
{
    vector<int> ans;
    stack<node *> st;
    node *curr = root;
    while (curr != NULL || st.empty() == 0)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        ans.push_back(curr->data);
        curr = curr->right;
    }
    return ans;
}
//------------------------------------------------------------------------------------------------------------------------------------------
void iterpostorder(node *root)
{
    stack<node *> st1, st2;
    st1.push(root);
    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left != NULL)
            st1.push(st2.top()->left);
        if (root->right != NULL)
            st1.push(st2.top()->right);
    }
    while (!st2.empty())
    {
        cout << st2.top()->data << " ";
        st2.pop();
    }
    cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------
vector<int> iterpost(node *root)
{
    stack<node *> st1;
    vector<int> v;
    struct node *curr = root;
    while (curr != NULL || !st1.empty())
    {
        if (curr != NULL)
        {
            st1.push(curr);
            curr = curr->left;
        }
        else
        {
            struct node *temp = st1.top()->right;
            if (temp == NULL)
            {
                temp = st1.top();
                st1.pop();
                v.push_back(temp->data);
                while (!st1.empty() && temp == st1.top()->right)
                {
                    temp = st1.top();
                    st1.pop();
                    v.push_back(temp->data);
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
    return v;
}
//------------------------------------------------------------------------------------------------------------------------------------------
void traversals(node *root)
{
    stack<pair<node *, int>> st;
    st.push({root, 1});
    vector<int> in, pre, post;
    while (!st.empty())
    {
        if (st.top().second == 1)
        {
            pre.push_back(st.top().first->data);
            st.top().second++;
            if (st.top().first->left != NULL)
            {
                st.push({st.top().first->left, 1});
            }
        }
        else if (st.top().second == 2)
        {
            in.push_back(st.top().first->data);
            st.top().second++;
            if (st.top().first->right != NULL)
            {
                st.push({st.top().first->right, 1});
            }
        }
        else if (st.top().second == 3)
        {
            post.push_back(st.top().first->data);
            st.pop();
        }
    }
    cout << "INORDER :";
    for (auto x : in)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "PREORDER :";
    for (auto x : pre)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "POSTRDER :";
    for (auto x : post)
    {
        cout << x << " ";
    }
    cout << endl;
}
//------------------------------------------------------------------------------------------------------------------------------------------
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
    root->right->right->left = new node(9);
    root->right->right->right = new node(10);
    traversals(root);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    // // // vector<vector<int>> ans = levelorder(root);
    // vector<int> ans = iterpost(root);
    // for (auto x : ans)
    // // {
    // // for (auto i : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // // }
    // // iterpostorder(root);
}
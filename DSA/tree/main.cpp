#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout << root->key << " ";
    }
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}
void kthnode(node *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->key << " ";
    }
    kthnode(root->left, k - 1);
    kthnode(root->right, k - 1);
}
void leftorder(node *root)
{
    queue<node *> q;
    int size = 0;
    if (root == NULL)
        return;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        size++;
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
    // cout<<size<<endl;
}
int getsize(node *root)
{
    if (root == NULL)
        return 0;
    return getsize(root->left) + getsize(root->right) + 1;
}
int getmax(node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    return max(root->key, max(getmax(root->left), getmax(root->right)));
}
void iterinorder(node *root)
{
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
        cout << curr->key << " ";
        curr = curr->right;
    }
}
void iterpreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> st;
    st.push(root);
    while (st.empty() == 0)
    {
        node *curr = st.top();
        cout << curr->key << " ";
        st.pop();
        if (curr->right != NULL)
        {
            st.push(curr->right);
        }
        if (curr->left != NULL)
        {
            st.push(curr->left);
        }
    }
}
int main()
{
    node *root = new node(00);
    root->left = new node(55);
    root->right = new node(45);
    root->left->left = new node(25);
    root->left->right = new node(25);
    root->right->right = new node(15);
    root->right->left = new node(5);
    preorder(root);
    cout << endl;
    iterpreorder(root);
    // leftorder(root);
    // cout << getsize(root);
    // cout << height(root);
    // kthnode(root, 1);
    // cout << getmax(root);
}
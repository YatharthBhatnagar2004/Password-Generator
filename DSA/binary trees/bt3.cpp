#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *left;
    node *right;
    int data;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool issymmetric(node *left, node *right)
{
    if (left == NULL || right == NULL)
    {
        return left == right;
    }
    if (left->data != right->data)
        return 0;
    return issymmetric(left->left, right->right) && issymmetric(left->right, right->left);
}
bool roottonode(node *root, vector<int> &v, int node)
{
    if (!root)
    {
        return false;
    }
    v.push_back(root->data);
    if (root->data == node)
    {
        return true;
    }
    if (roottonode(root->left, v, node) || roottonode(root->right, v, node))
    {
        return true;
    }
    v.pop_back();

    return false;
}
node *lca(node *root, node *p, node *q)
{
    if (root == NULL || root == p || root == q)
    {
        return root;
    }
    node *left = lca(root->left, p, q);
    node *right = lca(root->right, p, q);
    if (left == NULL)
    {
        return right;
    }
    else if (right == NULL)
    {
        return left;
    }
    else
    {
        return root;
    }
}
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
    cout << issymmetric(root->left, root->right);
    vector<int> v;
    roottonode(root, v, 6);
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
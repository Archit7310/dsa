#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
void Insert(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node();
        root->data = data;
        return;
    }
    if (data < root->data)
    {
        Insert(root->left, data);
        return;
    }
    Insert(root->right, data);
    return;
}
void Preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}
bool isSubtreeLesser(node *root, int data)
{
    if (root == NULL)
        return true;
    if (root->data < data && isSubtreeLesser(root->left, data) && isSubtreeLesser(root->right, data))
        return true;
    else
        return false;
}
bool isSubTreeGreater(node *root, int data)
{
    if (root == NULL)
        return true;
    if (root->data > data && isSubTreeGreater(root->left, data) && isSubTreeGreater(root->right, data))
        return true;
    else
        return false;
}
bool isBST(node *root)
{
    if (root == NULL)
        return true;
    if (isSubtreeLesser(root->left, root->data) && isSubTreeGreater(root->right, root->data) && isBST(root->left) && isBST(root->right))
        return true;
    else
        return false;
}
int main()
{
    fastio;
    node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        Insert(root, a);
    }
    Preorder(root);
    cout << endl;
    cout << isBST(root);
    return 0;
}
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};
int Height(node *root)
{
    // O(n) will be the time complexity
    if (root == NULL)
    {
        return -1;
    }
    return max(Height(root->left), Height(root->right)) + 1;
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
void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void Postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}
int findMin(node *root)
{
    if (root == NULL)
    {
        cout << "empty";
        return -1;
    }
    if (root->left == NULL)
    {
        return root->data;
    }
    return findMin(root->left);
}
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
bool Search(node *root, int data)
{
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;
    if (data < root->data)
        return Search(root->left, data);
    return Search(root->right, data);
}
void Delete(node *&root, node *&par, int data)
{
}
int main()
{
    node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        Insert(root, a);
    }

    // Insert(root, 10);
    // Insert(root, 5);
    // Insert(root, 4);
    // Insert(root, 6);
    // Insert(root, 20);
    // Insert(root, 15);
    // Insert(root, 25);
    // cout << Height(root);
    //           10
    //       5__| |___20
    //   4__||__6 15__||__25
    Preorder(root);
    cout << endl;
    Inorder(root);
    cout << endl;
    Postorder(root);

    // cout << root->data << endl;
    // cout << root->right->data << endl;
    // cout << root->right->left->data;
    // cout << root->left->data;
    // cout << (Search(root, 9) ? "Found" : "Not found") << endl;
    // cout << findMin(root) << endl;
    return 0;
}
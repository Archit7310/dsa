#include <bits/stdc++.h>
#define endl "\n"

class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
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
bool Search(node *root, int data)
{
    if (root == NULL)
        return false;
    if (data < root->data)
        return Search(root->left, data);
    if (data > root->data)
        return Search(root->right, data);
}
using namespace std;
int main()
{
    node *root = NULL;
    Insert(root, 10);
    Insert(root, 20);
    Insert(root, 15);
    // cout << root->left->data;
    cout << (Search(root, 15) ? "Found" : "Not found") << endl;
    cout << root->data << endl;
    cout << root->right->data << endl;
    cout << root->right->left->data << endl;
    return 0;
}
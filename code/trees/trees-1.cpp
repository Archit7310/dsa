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
node *findMin(node *root)
{
    if (root == NULL)
    {
        cout << "empty";
        return root;
    }
    if (root->left == NULL)
    {
        return root;
    }
    return findMin(root->left);
}
node *Delete(node *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else
    {
        // case 1
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // case 2
        else if (root->left == NULL)
        {
            node *n = root;
            root = root->right;
            delete n;
        }
        else if (root->right == NULL)
        {
            node *n = root;
            root = root->left;
            delete n;
        }
        // case 3
        else
        {
            node *n = findMin(root);
            root->data = n->data;
            root->right = Delete(root->right, root->data);
        }
    }
    return root;
}
node *find(node *root, int data)
{
    if (root == NULL)
        return NULL;
    if (root->data == data)
        return root;
    if (data < root->data)
        return find(root->left, data);
    return find(root->right, data);
}
node *inorderSuccessor(node *root, int data)
{
    node *n = find(root, data);
    if (n == NULL)
        return NULL;
    // if it has right child
    if (n->right != NULL)
    {
        return findMin(n->right);
    }
    //if it has no right child
    else
    {
        node *succesor = NULL;
        node *ansestor = root;
        while (ansestor != n)
        {
            if (n->data < ansestor->data)
            {
                succesor = ansestor;
                ansestor = ansestor->left;
            }
            else
                ansestor = ansestor->right;
        }
        return succesor;
    }
}

int main()
{
    node *root = NULL;
    node *parent = NULL;
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
    // root = Delete(root, 85);
    Inorder(root);
    return 0;
}
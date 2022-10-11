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
void countNodes(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    count++;
    countNodes(root->left, count);
    countNodes(root->right, count);
}
void countLeaf(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    countLeaf(root->left, count);
    countLeaf(root->right, count);
}
void countSingleChild(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
    {
        count++;
    }
    countSingleChild(root->left, count);
    countSingleChild(root->right, count);
}
int Height(node *root)
{
    // O(n) will be the time complexity
    if (root == NULL)
    {
        return -1;
    }
    return max(Height(root->left), Height(root->right)) + 1;
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
    int count = 0;
    countNodes(root, count);
    cout << count << endl;
    count = 0;
    countLeaf(root, count);
    cout << count << endl;
    count = 0;
    countSingleChild(root, count);
    cout << count << endl;
    cout << Height(root);
    return 0;
}
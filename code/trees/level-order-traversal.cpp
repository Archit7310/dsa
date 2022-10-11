#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

void addinBST(node *&root, int data)
{
    if (root == NULL)
    {
        root = new node();
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    if (data < root->data)
    {
        addinBST(root->left, data);
        return;
    }
    addinBST(root->right, data);
    return;
}

int heightofBST(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int l_height = heightofBST(root->left);
        int r_height = heightofBST(root->right);
        if (l_height > r_height)
            return (l_height + 1);
        else
            return (r_height + 1);
    }
}

//
void levelordertraversal(node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        levelordertraversal(root->left, level - 1);
        levelordertraversal(root->right, level - 1);
    }
}

void lotwithQueue(node *root)
{
    queue<node *> nodelist;
    nodelist.push(root);
    while (!nodelist.empty())
    {
        node *ele = nodelist.front();
        nodelist.pop();
        cout << ele->data << " ";
        if (ele->left != NULL)
            nodelist.push(ele->left);
        if (ele->right != NULL)
            nodelist.push(ele->right);
    }
}

void lotwithQueuewithSpace(node *root)
{
    queue<node *> nodelist;
    nodelist.push(root);
    nodelist.push(NULL);
    while (!nodelist.empty())
    {
        node *ele = nodelist.front();
        nodelist.pop();
        if (ele == NULL)
        {
            if (nodelist.empty())
            {
                return;
            }
            cout << endl;
            nodelist.push(NULL);
            continue;
        }
        cout << ele->data << " ";
        if (ele->left != NULL)
            nodelist.push(ele->left);
        if (ele->right != NULL)
            nodelist.push(ele->right);
    }
}

int main()
{
    node *root = NULL;
    addinBST(root, 12);
    addinBST(root, 10);
    addinBST(root, 20);
    addinBST(root, 25);
    addinBST(root, 30);
    int height = heightofBST(root);
    // cout << height << endl;
    lotwithQueuewithSpace(root);
    return 0;
}
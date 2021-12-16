#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};

int SumMInLevelLeafNodes(TreeNode *root)
{
    if (root == NULL)
        return -1;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    return SumMInLevelLeafNodes(root->left) + SumMInLevelLeafNodes(root->right);
}

TreeNode *OverLapTrees(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL)
        return root2;
    if (root2 == NULL)
        return root1;
    root1->data += root2->data;
    root1->left = OverLapTrees(root1->left, root2->left);
    root1->right = OverLapTrees(root1->right, root2->right);
    return root1;
}

struct Node{
    int data;
    Node *next;
};

Node* ReverseLinkedListHalves(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    fastio;

    return 0;
}
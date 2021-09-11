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
    node *next;
};

int main()
{
    fastio;
    node *head = NULL;
    node *temp = new node;
    temp->data = 10;
    cout << temp->data;

    return 0;
}
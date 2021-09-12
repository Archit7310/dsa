#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printll(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL" << endl;
}

void llpushatStart(node *&head, int data)
{
    node *n = new node();
    n->data = data;
    n->next = head;
    head = n;
}

void llpushatEnd(node *&head, int data)
{
    node *n = new node();
    n->data = data;
    node *temp = head;
    if (temp == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // as we passed the head as a reference so changes in the adress will happen in our main LL.
    temp->next = n;
}

void llpushatN(node *&head, int data, int index)
{
    node *n = new node();
    int i = 0;
    n->data = data;
    node *temp = head;
    if (temp == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL && i != index)
    {
        temp = temp->next;
        i++;
    }
    if (i != index)
    {
        cout << "index not found\n";
        return;
    }
    n->next = temp;
    temp = n;
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        llpushatEnd(head, data);
    }
    llpushatN(head, 9, 2);
    printll(head);
    return 0;
}